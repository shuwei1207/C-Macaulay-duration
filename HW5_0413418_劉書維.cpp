#include <iostream>
#include <stdio.h>

using namespace std;
 int main()
 {
     int n;
	 float c,r,value=0,discount,duration=0;
     cout<<"�п�J����"<<endl;
     cin>>n;
     cout<<"�п�J�Ů�"<<endl;
     cin>>c;
     cout<<"�п�J�Q�v�F"<<endl;
     cin>>r;


 	for(int i=1;i<=n;i=i+1)
 	{
 		discount=1;
 		for(int j=1;j<=i;j++)
 		{
 			discount=discount/(1+r);
		}
		duration=duration+i*discount*c;
		value=value+discount*c;
		
		if(i==n)
		{
		 	value=value+discount*100;
		 	duration=duration+n*discount*100;
		 	printf("%f\n",duration);
			printf("%f\n",value);
		}
		
	}
    duration=duration/value;
	cout<<"MD="<<duration<<endl;

    float mod;
    mod=duration/(1+r);  //modified duration
    float dp;
    dp=mod*0.0001*100; //�ʤ���

    cout<<"modified duration:"<<mod<<endl;
 	cout<<"�����ܰ�"<<dp<<"%";
 	return 0;
  }
