#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>
using namespace std;

//functions prototypes
void add(int argc,char *argv[]);
void middle(int argc,char *argv[]);
void Delete(int argc,char *argv[]);
void print(int argc,char *argv[]);
void Reverse(int argc,char *argv[]);
void shuffleStatement(int argc,char *argv[]);
void shuffleWord(int argc,char *argv[]);
void upper(int argc,char *argv[]);
void random(char *argv[]);

int x;
bool ok=true;
int main(int argc, char* argv[])
{if((argv[1][0]=='a')&&(argv[1][1]=='d')&&(argv[1][2]=='d'))
                        {if(argc>=3){for(int i=2;i<=(argc-1);)
                                       {if(isdigit(*argv[i])){i++;}
                                         else {cout<<"ERROR:INCORRECT DATA TYPES"<<" ";break;}
                                      if(i==argc){add(argc,argv);}}}
                          else{cout<<"ERROR: INCORRECT NUMBER OF ARGUMENTS"<<" ";}}
else if((argv[1][0]=='m')&&(argv[1][1]=='i')&&(argv[1][2]=='d')&&(argv[1][3]=='d')&&(argv[1][4]=='l')&&(argv[1][5]=='e'))
                        {if(argc>=3){middle(argc,argv);}
                          else{cout<<"ERROR: INCORRECT NUMBER OF ARGUMENTS"<<" ";}}
else if((argv[1][0]=='D')&&(argv[1][1]=='e')&&(argv[1][2]=='l')&&(argv[1][3]=='e')&&(argv[1][4]=='t')&&(argv[1][5]=='e'))
                        {if(argc>=4){Delete(argc,argv);}
                          else{cout<<"ERROR: INCORRECT NUMBER OF ARGUMENTS"<<" ";}}
else if((argv[1][0]=='p')&&(argv[1][1]=='r')&&(argv[1][2]=='i')&&(argv[1][3]=='n')&&(argv[1][4]=='t'))
                        {if(argc>=3){print(argc,argv);}
                          else{cout<<"ERROR: INCORRECT NUMBER OF ARGUMENTS"<<" ";}}
else if((argv[1][0]=='r')&&(argv[1][1]=='e')&&(argv[1][2]=='v')&&(argv[1][3]=='e')&&(argv[1][4]=='r')&&(argv[1][5]=='s')&&(argv[1][6]=='e'))
                        {if(argc>=3){Reverse(argc,argv);}
                          else{cout<<"ERROR: INCORRECT NUMBER OF ARGUMENTS"<<" ";}}
else if((argv[1][0]=='s')&&(argv[1][1]=='h')&&(argv[1][2]=='u')&&(argv[1][3]=='f')&&(argv[1][4]=='f')&&(argv[1][5]=='l')&&(argv[1][6]=='e')&&(argv[1][7]=='s')&&(argv[1][8]=='t')&&(argv[1][9]=='a')&&(argv[1][10]=='t')&&(argv[1][11]=='e')&&(argv[1][12]=='m')&&(argv[1][13]=='e')&&(argv[1][14]=='n')&&(argv[1][15]=='t'))
                        {if(argc>=3){shuffleStatement(argc,argv);}
                          else{cout<<"ERROR: INCORRECT NUMBER OF ARGUMENTS"<<" ";}}
else if((argv[1][0]=='s')&&(argv[1][1]=='h')&&(argv[1][2]=='u')&&(argv[1][3]=='f')&&(argv[1][4]=='f')&&(argv[1][5]=='l')&&(argv[1][6]=='e')&&(argv[1][7]=='w')&&(argv[1][8]=='o')&&(argv[1][9]=='r')&&(argv[1][10]=='d'))
                        {if(argc>=3){shuffleWord(argc,argv);}
                          else{cout<<"ERROR: INCORRECT NUMBER OF ARGUMENTS"<<" ";}}
else if((argv[1][0]=='u')&&(argv[1][1]=='p')&&(argv[1][2]=='p')&&(argv[1][3]=='e')&&(argv[1][4]=='r'))
                        {if(argc>=3){for(int j=2;j<=(argc-1);j++)
                                       {int i=0;while(argv[j][i]!='\0')
                                                 {if(isupper(argv[j][i])){cout<<"ERROR: THE STEATEMENT MAY CONTAIN SOME UPPERCASE LETTERS "<<" ";ok=false;break;}else{i++;}}
                                      if((j==(argc-1))&& (ok)){upper(argc,argv);}
                                      if(!ok){break;}}}
                          else{cout<<"ERROR: INCORRECT NUMBER OF ARGUMENTS"<<" ";}}

else if((argv[1][0]=='r')&&(argv[1][1]=='a')&&(argv[1][2]=='n')&&(argv[1][3]=='d')&&(argv[1][4]=='o')&&(argv[1][5]=='m'))
                        {if(argc==6){for(int i=2;i<=(argc-1);)
                                       {if(isdigit(*argv[i])){i++;}
                                         else {cout<<"ERROR:INCORRECT DATA TYPES"<<" ";break;}
                                      if(i==argc){random(argv);}}}
                          else{cout<<"ERROR: INCORRECT NUMBER OF ARGUMENTS"<<" ";}}
else{cout<<"UNDEFINED COMMAND"<<" ";}

return 0;
}

//functions body

void add(int argc,char *argv[])
{int sum=0;
 for(int i=2;i<=(argc-1);i++)
 {sum=sum+atoi(argv[i]);}
 cout<<sum<<" ";
}

void middle(int argc,char *argv[])
{
    if((argc-2)%2==0){cout<<argv[(argc/2)]<<"  "<<argv[(argc/2)+1];}
    else {cout<<argv[(argc/2)+1];}
}

void Delete(int argc,char *argv[])
{int index; index=atoi(argv[2]);
for(int i=(index+2);i<=(argc-1);i++)
 {if(i==(argc-1)){argv[i]=" ";}
 else{argv[i]=argv[i+1];}}
for(int j=3;j<=argc-1;j++)
    {cout <<argv[j]<< " ";}

}

void print(int argc,char *argv[])
{for(int j=2;j<=argc-1;j++)
    {cout <<argv[j]<< " ";}
}

void Reverse(int argc,char *argv[])
{for(int j=argc-1;j>=2;j--)
    {cout <<argv[j]<< " ";}
}

void shuffleStatement(int argc,char *argv[])
{for(int i=2;i<=(argc-1);i+=2)
     {if((i+1)==argc) { }
      else{swap(argv[i],argv[i+1]);}}
 for(int j=2;j<=argc-1;j++)
    {cout <<argv[j]<< " ";}
}

void upper(int argc,char *argv[])
{
for(int j=2;j<=argc-1;j++)
{int i=0;while(argv[j][i]!='\0'){argv[j][i]-=32;i+=1;}}
for(int k=2;k<=argc-1;k++)
    {cout <<argv[k]<< " ";}
}


void shuffleWord(int argc,char *argv[])
{int i=0;
while(argv[2][i+1]!='\0'){swap(argv[2][i],argv[2][i+1]);i+=2;}
cout <<argv[2];
}

void random(char *argv[])
{int sequencelength=atoi(argv[2]);
int minNumber=atoi(argv[3]);
int maxNumber=atoi(argv[4]);
int seed=atoi(argv[5]);

srand(seed);
 for(int i =1 ; i <=sequencelength; i++)
     {cout<< (minNumber + (rand( ) % (maxNumber-minNumber+1)))<<" ";}
}
