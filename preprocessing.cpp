#include<bits/stdc++.h>
#include<cstring>
#include<fstream>
#include<iostream>
#include<sstream>
using namespace std;
vector<string> ss = {"abc\\01 03 2021 SC 10355 OF 2018.pdf","abc\\01 03 2021 SC 10355 OF 2018.txt","abc\\01 03 2021 SC 10355 OF 2018.xml","abc\\01 03 2021 SC 142 OF 2021.pdf","abc\\01 03 2021 SC 142 OF 2021.txt","abc\\01 03 2021 SC 142 OF 2021.xml","abc\\01 03 2021 SC 167 OF 2021.pdf","abc\\01 03 2021 SC 167 OF 2021.txt","abc\\01 03 2021 SC 167 OF 2021.xml","abc\\01 03 2021 SC 202 OF 2012.pdf","abc\\01 03 2021 SC 202 OF 2012.txt","abc\\01 03 2021 SC 202 OF 2012.xml","abc\\01 03 2021 SC 4230-4234 OF 2020.pdf","abc\\01 03 2021 SC 4230-4234 OF 2020.txt","abc\\01 03 2021 SC 4230-4234 OF 2020.xml","abc\\01 03 2021 SC 580 OF 2018.pdf","abc\\01 03 2021 SC 580 OF 2018.txt","abc\\01 03 2021 SC 580 OF 2018.xml","abc\\01 03 2021 SC 738-739 OF 2021.pdf","abc\\01 03 2021 SC 738-739 OF 2021.txt","abc\\01 03 2021 SC 738-739 OF 2021.xml","abc\\01 03 2021 SC 946 OF 2016.pdf","abc\\01 03 2021 SC 946 OF 2016.txt","abc\\01 03 2021 SC 946 OF 2016.xml","abc\\02 03 2021 SC 1348 OF 2013.pdf","abc\\02 03 2021 SC 1348 OF 2013.txt","abc\\02 03 2021 SC 1348 OF 2013.xml","abc\\02 03 2021 SC 791 OF 2021.pdf","abc\\02 03 2021 SC 791 OF 2021.txt","abc\\02 03 2021 SC 791 OF 2021.xml","abc\\03 03 2021 SC 639-640 of 2021.pdf","abc\\03 03 2021 SC 639-640 of 2021.txt","abc\\03 03 2021 SC 639-640 of 2021.xml","abc\\04 03 2021 SC 267 OF 2021.pdf","abc\\04 03 2021 SC 267 OF 2021.txt","abc\\04 03 2021 SC 267 OF 2021.xml","abc\\04 03 2021 SC 3592-3593 OF 2020.pdf","abc\\04 03 2021 SC 3592-3593 OF 2020.txt","abc\\04 03 2021 SC 3592-3593 OF 2020.xml","abc\\04 03 2021 SC 810 OF 2021.pdf","abc\\04 03 2021 SC 810 OF 2021.txt","abc\\04 03 2021 SC 810 OF 2021.xml","abc\\04 03 2021 SC 980 OF 2019.pdf","abc\\04 03 2021 SC 980 OF 2019.txt","abc\\04 03 2021 SC 980 OF 2019.xml","abc\\05 03 2021 SC 3745-3754 OF 2020.pdf","abc\\05 03 2021 SC 3745-3754 OF 2020.txt","abc\\05 03 2021 SC 3745-3754 OF 2020.xml","abc\\05 03 2021 SC 495 of 2021.pdf","abc\\05 03 2021 SC 495 of 2021.txt","abc\\05 03 2021 SC 495 of 2021.xml","abc\\05 03 2021 SC 814-815 Of 2021.pdf","abc\\05 03 2021 SC 814-815 Of 2021.txt","abc\\05 03 2021 SC 814-815 Of 2021.xml","abc\\05 03 2021 SC 821 of 2021.pdf","abc\\05 03 2021 SC 821 of 2021.txt","abc\\05 03 2021 SC 821 of 2021.xml","abc\\08 03 2021 SC 258 OF 2021.pdf","abc\\08 03 2021 SC 258 OF 2021.txt","abc\\08 03 2021 SC 258 OF 2021.xml","abc\\08 03 2021 SC 283   OF 2021.pdf","abc\\08 03 2021 SC 283   OF 2021.txt","abc\\08 03 2021 SC 283   OF 2021.xml","abc\\08 03 2021 SC 3 of 2020.pdf","abc\\08 03 2021 SC 3 of 2020.txt","abc\\08 03 2021 SC 3 of 2020.xml","abc\\08 03 2021 SC 37 OF 2009.pdf","abc\\08 03 2021 SC 37 OF 2009.txt","abc\\08 03 2021 SC 37 OF 2009.xml","abc\\08 03 2021 SC 443 OF 2020.pdf","abc\\08 03 2021 SC 443 OF 2020.txt","abc\\08 03 2021 SC 443 OF 2020.xml","abc\\08 03 2021 SC 825 OF 2021.pdf","abc\\08 03 2021 SC 825 OF 2021.txt","abc\\08 03 2021 SC 825 OF 2021.xml","abc\\09 03 2021 SC 1827 OF 2018.pdf","abc\\09 03 2021 SC 1827 OF 2018.txt","abc\\09 03 2021 SC 1827 OF 2018.xml","abc\\09 03 2021 SC 292 OF 2021.pdf","abc\\09 03 2021 SC 292 OF 2021.txt","abc\\09 03 2021 SC 292 OF 2021.xml","abc\\09 03 2021 SC 413 OF 2019.pdf","abc\\09 03 2021 SC 413 OF 2019.txt","abc\\09 03 2021 SC 413 OF 2019.xml","abc\\10 03 2021 SC 2943-2944 OF 2020.pdf","abc\\10 03 2021 SC 2943-2944 OF 2020.txt","abc\\10 03 2021 SC 2943-2944 OF 2020.xml","abc\\10 03 2021 SC 296 OF 2021.pdf","abc\\10 03 2021 SC 296 OF 2021.txt","abc\\10 03 2021 SC 296 OF 2021.xml","abc\\10 03 2021 SC 843-844 OF 2021.pdf","abc\\10 03 2021 SC 843-844 OF 2021.txt","abc\\10 03 2021 SC 843-844 OF 2021.xml","abc\\10 03 2021 SC 845 OF 2021.pdf","abc\\10 03 2021 SC 845 OF 2021.txt","abc\\10 03 2021 SC 845 OF 2021.xml","abc\\12 03 2021 SC 5102 of 2020.pdf","abc\\12 03 2021 SC 5102 of 2020.txt","abc\\12 03 2021 SC 5102 of 2020.xml","abc\\12 03 2021 SC 881 OF 2021.pdf","abc\\12 03 2021 SC 881 OF 2021.txt","abc\\12 03 2021 SC 881 OF 2021.xml","abc\\15 03 2021 SC 298-299 OF 2021.pdf","abc\\15 03 2021 SC 298-299 OF 2021.txt","abc\\15 03 2021 SC 298-299 OF 2021.xml","abc\\15 03 2021 SC 320 OF 2021.pdf","abc\\15 03 2021 SC 320 OF 2021.txt","abc\\15 03 2021 SC 320 OF 2021.xml","abc\\17 03 2021 SC 25 OF 2021.pdf","abc\\17 03 2021 SC 25 OF 2021.txt","abc\\17 03 2021 SC 25 OF 2021.xml","abc\\19 03 2021 SC 336 OF 2021.pdf","abc\\19 03 2021 SC 336 OF 2021.txt","abc\\19 03 2021 SC 336 OF 2021.xml","abc\\19 03 2021 SC 995 OF 2021.pdf","abc\\19 03 2021 SC 995 OF 2021.txt","abc\\19 03 2021 SC 995 OF 2021.xml","abc\\23 03 2021 SC 121 OF 2019.pdf","abc\\23 03 2021 SC 121 OF 2019.txt","abc\\23 03 2021 SC 121 OF 2019.xml","abc\\23 03 2021 SC 337 OF 2021.pdf","abc\\23 03 2021 SC 337 OF 2021.txt","abc\\23 03 2021 SC 337 OF 2021.xml","abc\\23 03 2021 SC 476 OF 2020.pdf","abc\\23 03 2021 SC 476 OF 2020.txt","abc\\23 03 2021 SC 476 OF 2020.xml","abc\\23 03 2021 SC 49 OF 2021.pdf","abc\\23 03 2021 SC 49 OF 2021.txt","abc\\23 03 2021 SC 49 OF 2021.xml","abc\\24 03 2021 SC 3395 OF 2020.pdf","abc\\24 03 2021 SC 3395 OF 2020.txt","abc\\24 03 2021 SC 3395 OF 2020.xml","abc\\24 03 2021 SC 363 OF 2021.pdf","abc\\24 03 2021 SC 363 OF 2021.txt","abc\\24 03 2021 SC 363 OF 2021.xml","abc\\25 03 2021 SC 1007 OF 2021.pdf","abc\\25 03 2021 SC 1007 OF 2021.txt","abc\\25 03 2021 SC 1007 OF 2021.xml","abc\\25 03 2021 SC 1109 of 2020.pdf","abc\\25 03 2021 SC 1109 of 2020.txt","abc\\25 03 2021 SC 1109 of 2020.xml","abc\\25 03 2021 SC 141 of 2021.pdf","abc\\25 03 2021 SC 141 of 2021.txt","abc\\25 03 2021 SC 141 of 2021.xml","abc\\25 03 2021 SC 25047 OF 2018.pdf","abc\\25 03 2021 SC 25047 OF 2018.txt","abc\\25 03 2021 SC 25047 OF 2018.xml","abc\\25 03 2021 SC 554-000557 of 2021.pdf","abc\\25 03 2021 SC 554-000557 of 2021.txt","abc\\25 03 2021 SC 554-000557 of 2021.xml"};
int main(){

   




    for(auto str: ss){

        if(str[str.length()-1]!='t')continue;
   
        int n = str.length();

        for(int i=0;i<n;i++){
            if(str[i]=='\\'){
                str[i]='/';
            }
        }
    
    
    
    char* inputfile = (char*)malloc((n+1)*sizeof(char));
    int i=0;
    for(i=0;i<n;i++){
        inputfile[i]=str[i];
    }
    inputfile[i]='\0';
   


    str[n]='\0';
   
   
    str = "out/" +str;
    n =str.length();
    char* outputfile = (char*)malloc((n+1)*sizeof(char));
    i=0;
    for(i=0;i<n;i++){
        outputfile[i]=str[i];
    }
    outputfile[i]='\0';
 
    ifstream infile;
    ofstream outfile;
    infile.open (inputfile);
    outfile.open(outputfile);



   
    string s;
    int currpage=1;

    while(getline(infile,s)){
          int i=0;
          while(i<s.length() && s[i]==' ')i++;
      
            for(int j=i;j<s.length();j++){
                if(s[j]==' ' && s[j-1]==' ')continue;
                if(s[j]==-99 || s[j]==-100)outfile<<'"';
                else if(s[j]==-90)outfile<<"...";
                else if(s[j]==-104 || s[j]==-103)outfile<<"'";
                else if(s[j]==-109 || s[j]==-108)outfile<<"-";
                else if(s[j]>=0)outfile<<s[j];
                }
                outfile<<"\n";
        
    }
    
    }

}
