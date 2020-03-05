#include<fstream>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll label = 2056, flag = 0;
	map < string, ll > hm ;
	ofstream outfile,outfile1;
	ifstream infile;

	infile.open("code.xsm");

	string data;
	while(getline(infile,data))
	{

		ll size = data.size();

		if(data != "0" && data != "2056")
			flag = 1;


		if(data[0] == 'L' && data[size - 1] == ':')
		{
			if(hm[data] == 0)
				hm[data] = label;
		}
		else if(flag == 1)
			label += 2;
	}

	infile.close();
	outfile.open("translated.xsm");
	outfile1.open("translated_chk.xsm");
	infile.open("code.xsm");


	// for(auto i = hm.begin();i != hm.end();i++)
	// {
	// 	cout << i->first << " " << i->second << "\n";
	// }
	ll x = 2056;
	flag = 0;
	while(getline(infile,data))
	{
		string newline = "\n",save = "",data1 = "";
		ll size = data.size(), i = 0;

		if(data != "0" && data != "2056")
			flag = 1;

		if((data[0] == 'L' && data[size - 1] == ':'))
		{
				continue;
		}
		else if(data[0] == 'J' && data[1] == 'M' && data[2] == 'P')
		{
			i = 4;
			data1 += "JMP ";
			while(data[i] != '\0')
			{
				save += data[i];
				i++;
			}
			save += ':';
			save = to_string(hm[save]);
			data1 += save;
			outfile << data1 << newline ;
			outfile1 << x << " " << data1 << newline ;
		}
		else if(data[0] == 'J' && data[1] == 'Z')
		{
			i = 0;
			while(data[i + 1] != 'L')
			{
				data1 += data[i];
				i++;
			}
			i++;
			while(data[i] != '\0')
			{
				save += data[i];
				i++;
			}
			save += ':';
			save = to_string(hm[save]);
			data1 += save;
			outfile << data1 << newline ;
			outfile1 << x << " " << data1 << newline ;
		}
		else
		{
			outfile << data << newline ;
			outfile1 << x << " " << data << newline ;
		}

		if(flag)
			x += 2;
	}

}
