# -*- coding: utf-8 -*-
"""
Created on Sat Apr 23 18:33:48 2022

@author: eyaar
"""

#!/usr/bin/python
#!/usr/bin/python
print "print ('')
int(price24(int a, int b))
{
int price[3][3]={129,129,59,133,149,76,138,169,96};
return price[a-1][b-1];
}

//creating a function to return price for 30 months
int price30(int a, int b)
{
int price[3][3]={99,99,40,0,119,57,0,139,77};
return price[a-1][b-1];
}

//main function
int main()
{
//intitializing some variables required
int device=0,plan,phone,installments,monthlyPrice,price,customer,upfront;
char choice='Y';
//while loop to iterate till device less than 2 and choice is yes
while(device<2&&choice=='Y')
{
//displaying plan menu to the user      
cout<<\\"1. Plan 1(80 GB monthly quota) - RM 188/mth\\"<<endl;
cout<<\\"2. Plan 2(60 GB monthly quota) - RM 148/mth\\"<<endl;
cout<<\\"3. Plan 3(40 GB monthly quota) - RM 98/mth\\"<<endl;
cout<<\\"Select Plan: \\";
cin>>plan;
//displaying phone menu to the user     
cout<<\\"\n1. iP 12\\"<<endl;
cout<<\\"2. GN 20\\"<<endl;
cout<<\\"3. H P40\\"<<endl;
cout<<\\"Select Phone: \\";
cin >> phone;
//displaying months menu to the user    
cout << \\"\n1. 24 months\\"<<endl;
cout << \\"2. 30 months\\"<<endl;
cout << \\"Select installments months: \\";
cin >> installments;
//checking plan and installment
if(phone==0&&(plan==2||plan==3)&&installments==2)
{
cout<<\\"This installment choice is not available. You can only have 24 months installments.\\";
cout<<\\"\nYour installments selection has been set to 24 months.\\";
installments=24;
}
if(installments==1)
{
monthlyPrice=price24(plan,phone);
price=monthlyPrice*24;
}
else if(installments==2)
{
monthlyPrice=price30(plan,phone);
price=monthlyPrice*30;
}

//displaying customer menu to the user  
cout<<\\"\n1. New Customer.\\"<<endl;
cout<<\\"2. Existing Customer for more than 6 months but less than a year.\\"<<endl;
cout<<\\"3. Existing Customer for more than a year.\\"<<endl;
cout<<\\"Select your choice: \\";
cin>>customer;

//cacculating upfront
if(customer==1)
{
upfront=6*monthlyPrice;
}
else if(customer==2)
{
upfront=3*monthlyPrice;
}
else if(customer==3)
{
upfront=0;
}

//displaying the result
cout<<\\"\nTotal price: \\"<<price<<endl;
cout<<\\"Monthly commitment: \\"<<monthlyPrice<<endl;
cout<<\\"Upfront payment: \\"<<upfront<<endl;
device++;

//another choice for the user
if(device<2)
{
cout<<\\"Do you want another device?(Y/N) \\";
fflush(stdin);
cin>>choice;
}
else
{
cout<<\\"Sorry! only two devices can be bought.\\"<<endl;
}
}
return 0;
}\n\";\n";
