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
void shuffle(int argc,char *argv[]);
void upper(int argc,char *argv[]);
void random(char *argv[]);

int x;
signed int y=2147483647;

bool ok=true;bool ok1=true;
int main(int argc, char* argv[])
{if((argv[1][0]=='a')&&(argv[1][1]=='d')&&(argv[1][2]=='d'))
                        {if(argc>=3)
                          {for(int i=2;i<=(argc-1);)
                            {if(isdigit(*argv[i])){i++;}
                             else if((argv[i][0]=='+')||(argv[i][0]=='-'))
                                {if((argv[i][1]=='\0')){cout<<"Incorrect Data Type"<<" ";ok1=false;ok=false;break;}
                                 else{int j=1;while(argv[i][j]!='\0'){if(isdigit(argv[i][j])){j++;} else{ok1=false;break;}}
                                      if(ok1){i++;}else{cout<<"Incorrect Data Type"<<" ";ok=false;break;}}}
                             else {cout<<"Incorrect Data Type"<<" ";ok=false;break;}}
                            if(ok){add(argc,argv);}}
                          else{cout<<"Incorrect Number of Arguments"<<" ";}}
else if((argv[1][0]=='m')&&(argv[1][1]=='i')&&(argv[1][2]=='d')&&(argv[1][3]=='d')&&(argv[1][4]=='l')&&(argv[1][5]=='e'))
                        {if(argc>=3){middle(argc,argv);}
                          else{cout<<"Incorrect Number of Arguments"<<" ";}}
else if(((argv[1][0]=='D')||(argv[1][0]=='d'))&&(argv[1][1]=='e')&&(argv[1][2]=='l')&&(argv[1][3]=='e')&&(argv[1][4]=='t')&&(argv[1][5]=='e'))
                        {if((argc>=4))
                             {if((isdigit(*argv[2]))&&(strtoll(argv[2],NULL,10)>=1)){int j=1;while(argv[2][j]!='\0'){if(isdigit(argv[2][j])){j++;} else{cout<<"Incorrect Data Type"<<" ";ok=false;break;}}
                                                                          if(ok){Delete(argc,argv);}}
                              else if((isdigit(*argv[2]))&&(strtoll(argv[2],NULL,10)<1)){cout<<"Incorrect Data Type"<<" ";}
                              else if(argv[2][0]=='+'){if((argv[2][1]=='\0')){cout<<"Incorrect Data Type"<<" ";}
                                                       else{int j=1;while(argv[2][j]!='\0'){if(isdigit(argv[2][j])){j++;} else{cout<<"Incorrect Data Type"<<" ";ok=false;break;}}
                                                             if(ok){Delete(argc,argv);}}}
                              else{cout<<"Incorrect Data Type"<<" ";}}

                         else{cout<<"Incorrect Number of Arguments"<<" ";}}
else if((argv[1][0]=='p')&&(argv[1][1]=='r')&&(argv[1][2]=='i')&&(argv[1][3]=='n')&&(argv[1][4]=='t'))
                        {if(argc>=3){print(argc,argv);}
                          else{cout<<"Incorrect Number of Arguments"<<" ";}}
else if((argv[1][0]=='r')&&(argv[1][1]=='e')&&(argv[1][2]=='v')&&(argv[1][3]=='e')&&(argv[1][4]=='r')&&(argv[1][5]=='s')&&(argv[1][6]=='e'))
                        {if(argc>=3){Reverse(argc,argv);}
                          else{cout<<"Incorrect Number of Arguments"<<" ";}}
else if((argv[1][0]=='s')&&(argv[1][1]=='h')&&(argv[1][2]=='u')&&(argv[1][3]=='f')&&(argv[1][4]=='f')&&(argv[1][5]=='l')&&(argv[1][6]=='e')&&(argv[1][7]=='S')&&(argv[1][8]=='t')&&(argv[1][9]=='a')&&(argv[1][10]=='t')&&(argv[1][11]=='e')&&(argv[1][12]=='m')&&(argv[1][13]=='e')&&(argv[1][14]=='n')&&(argv[1][15]=='t'))
                        {if(argc>=3){shuffleStatement(argc,argv);}
                          else{cout<<"Incorrect Number of Arguments"<<" ";}}
else if((argv[1][0]=='s')&&(argv[1][1]=='h')&&(argv[1][2]=='u')&&(argv[1][3]=='f')&&(argv[1][4]=='f')&&(argv[1][5]=='l')&&(argv[1][6]=='e')&&(argv[1][7]=='\0'))
                        {if(argc==3){shuffle(argc,argv);}
                          else{cout<<"Incorrect Number of Arguments"<<" ";}}
else if((argv[1][0]=='u')&&(argv[1][1]=='p')&&(argv[1][2]=='p')&&(argv[1][3]=='e')&&(argv[1][4]=='r'))
                        {if(argc>=3){upper(argc,argv);}
                          else{cout<<"Incorrect Number of Arguments"<<" ";}}
else if((argv[1][0]=='r')&&(argv[1][1]=='a')&&(argv[1][2]=='n')&&(argv[1][3]=='d')&&(argv[1][4]=='o')&&(argv[1][5]=='m'))
                        {if(argc==6){for(int i=2;i<=(argc-1);)
                            {if(isdigit(*argv[i])){i++;}
                             else if((argv[i][0]=='+')||(argv[i][0]=='-'))
                                {if((argv[i][1]=='\0')){cout<<"Incorrect Data Type"<<" ";ok1=false;ok=false;break;}
                                 else{int j=1;while(argv[i][j]!='\0'){if(isdigit(argv[i][j])){j++;} else{ok1=false;break;}}
                                      if(ok1){i++;}else{cout<<"Incorrect Data Type"<<" ";ok=false;break;}}}
                             else {cout<<"Incorrect Data Type"<<" ";ok=false;break;}}
                            if(ok){random(argv);}}
                          else{cout<<"Incorrect Number of Arguments"<<" ";}}
else{cout<<"Undefined Command"<<" ";}

return 0;
}

//functions body

void add(int argc,char *argv[])
{int sum=0;
for(int k=2;k<=argc-1;k++)
{if(argv[k][0]=='+'){int n=0;while(argv[k][n+1]!='\0'){argv[k][n]=argv[k][n+1];n++;}
                                if(argv[k][n+1]=='\0'){argv[k][n]='\0';}
                     if(((strtoll(argv[k],NULL,10)>=y)&&(sum>0))||(n>10)||((sum+strtoll(argv[k],NULL,10))>y)){cout<<"Incorrect Data Type"<<" ";ok=false;break;}
                     else{sum=sum+(strtoll(argv[k],NULL,10));}}

else if(argv[k][0]=='-'){int n=0;while(argv[k][n+1]!='\0'){argv[k][n]=argv[k][n+1];n++;}
                                   if(argv[k][n+1]=='\0'){argv[k][n]='\0';}
                         if(((-1*strtoll(argv[k],NULL,10)<= -(y+1))&&(sum<0))||(n>10)||((sum-strtoll(argv[k],NULL,10))< -(y+1))){cout<<"Incorrect Data Type"<<" ";ok=false;break;}
                         else{sum=sum-(strtoll(argv[k],NULL,10));}}
else if(isdigit(*argv[k])){int p=0;while(argv[k][p]!='\0'){if(isdigit(argv[k][p])){p++;}else{cout<<"Incorrect Data Type"<<" ";ok=false;break;}}
                            if(ok){if(((strtoll(argv[k],NULL,10)>=y)&&(sum>0))||(p>10)||((sum+strtoll(argv[k],NULL,10))>y)){cout<<"Incorrect Data Type"<<" ";ok=false;break;}
                                    else{sum=sum+(strtoll(argv[k],NULL,10));}}
                            else{break;}}

}
if(!ok){} else{cout<<sum<<" ";}
}

void middle(int argc,char *argv[])
{
    if((argc-2)%2==0){cout<<argv[(argc/2)]<<" "<<argv[(argc/2)+1];}
    else {cout<<argv[(argc/2)+1];}
}

void Delete(int argc,char *argv[])
{long long index;
if((isdigit(*argv[2]))){index=strtoll(argv[2],NULL,10);}
else if(argv[2][0]=='+'){int n=0;while(argv[2][n+1]!='\0'){argv[2][n]=argv[2][n+1];n++;}
                                if(argv[2][n+1]=='\0'){argv[2][n]='\0';}
                        index=strtoll(argv[2],NULL,10);}
if(index<=(argc-3))
   {if(index>=1)
      {for(int i=(index+2);i<=(argc-1);i++)
        {if(i==(argc-1)){argv[i]=" ";}
         else{argv[i]=argv[i+1];}}
       for(int j=3;j<=argc-1;j++)
        {cout <<argv[j]<< " ";}}
   //else {cout<<"Incorrect Data Type"<<" ";}
    }
else{cout<<"Incorrect Number of Arguments"<<" ";}
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
{int i=0;while(argv[j][i]!='\0'){if((isdigit((argv[j][i])))||(!(isalpha(argv[j][i])))){i++;}
                                else if(isupper(argv[j][i])){i++;}
                                else if(islower(argv[j][i])){argv[j][i]-=32;i++;}}}
for(int k=2;k<=argc-1;k++)
    {cout <<argv[k]<< " ";}
}


void shuffle(int argc,char *argv[])
{int i=0;
while((argv[2][i+1]!='\0')&&(argv[2][i]!='\0')){swap(argv[2][i],argv[2][i+1]);i+=2;}
cout <<argv[2];
}

void random(char *argv[])
{int sequencelength;
int minNumber;
int maxNumber;
int seed;

    for(int k=2;k<=5;k++)
{if(argv[k][0]=='+'){int n=0;while(argv[k][n+1]!='\0'){argv[k][n]=argv[k][n+1];n++;}
                                if(argv[k][n+1]=='\0'){argv[k][n]='\0';}
                     if((strtoll(argv[k],NULL,10)>y)){cout<<"Incorrect Data Type"<<" ";ok=false;break;}
                     else{if(k==2){sequencelength=strtoll(argv[2],NULL,10);}
                          if(k==3){minNumber=strtoll(argv[3],NULL,10);}
                          if(k==4){maxNumber=strtoll(argv[4],NULL,10);}
                          if(k==5){seed=strtoll(argv[5],NULL,10);}}}

else if(argv[k][0]=='-'){int n=0;while(argv[k][n+1]!='\0'){argv[k][n]=argv[k][n+1];n++;}
                                   if(argv[k][n+1]=='\0'){argv[k][n]='\0';}
                         if((-strtoll(argv[k],NULL,10)<-(y+1))){cout<<"Incorrect Data Type"<<" ";ok=false;break;}
                         else{if(k==2){sequencelength=-1*strtoll(argv[2],NULL,10);}
                          if(k==3){minNumber=-1*strtoll(argv[3],NULL,10);}
                          if(k==4){maxNumber=-1*strtoll(argv[4],NULL,10);}
                          if(k==5){seed=-1*strtoll(argv[5],NULL,10);}}}

else if(isdigit(*argv[k])){if((strtoll(argv[k],NULL,10)>y)){cout<<"Incorrect Data Type"<<" ";ok=false;break;}
                           else{int p=0;while(argv[k][p]!='\0'){if(isdigit(argv[k][p])){p++;}else{cout<<"Incorrect Data Type"<<" ";ok=false;break;}}
                                 if(ok){if(k==2){sequencelength=strtoll(argv[2],NULL,10);}
                          if(k==3){minNumber=strtoll(argv[3],NULL,10);}
                          if(k==4){maxNumber=strtoll(argv[4],NULL,10);}
                          if(k==5){seed=strtoll(argv[5],NULL,10);}}  else{break;}} }
}
if((sequencelength<=0)||(minNumber>=maxNumber)){cout<<"Incorrect Data Type"<<" ";}
else{srand(seed);
 for(int i =1 ; i <=sequencelength; i++)
     {cout<< (rand( )%(maxNumber-minNumber+1)+minNumber)<<" ";}}
}
