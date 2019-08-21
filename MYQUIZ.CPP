#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
int score=0;
cout<<"\t\t\tWELCOME TO THE GK QUIZ\n";
cout<<"Q1.What is the capital of India?\n";
cout<<"a.Mumbai"<<'\n'<<"b.Delhi"<<'\n'<<"c.Ghazipur"<<'\n'<<"d.Chennai";
cin>>ch;
switch(ch)
{
case 'a':cout<<"Wrong answer\n The correct answer is Delhi";
break;
case 'b':cout<<"Correct answer\n" ;score=score+5;
break;
case 'c':cout<<"Wrong answer\n The correct answer is Delhi";
break;
case 'd':cout<<"Wrong answer\n The correct answer is Delhi";
break;
}
cout<<"Q2.Which city is known as 'the pink city?'\n";
cout<<"a.Jaipur"<<'\n'<<"b.Delhi"<<'\n'<<"c.Nagpur"<<'\n'<<"d.Kanpur";
cin>>ch;
switch(ch)
{
case 'a':cout<<"Correct answer\n" ;score=score+5;
break;
case 'b':cout<< "Wrong answer\n The correct answer is Jaipur";
break;
case 'c':cout<<"Wrong answer\n The correct answer is Jaipur";
break;
case 'd':cout<<"Wrong answer\n The correct answer is Jaipur";
break;
}
cout<<"Q3.Which city is famous for opium factory?'\n";
cout<<"a.Jaipur"<<'\n'<<"b.Varanasi"<<'\n'<<"c.Nagpur"<<'\n'<<"d.Ghazipur";
cin>>ch;
switch(ch)
{
case 'a':cout<<"Wrong answer\n The correct answer is Ghazipur";
break;
case 'b':cout<< "Wrong answer\n The correct answer is Ghazipur";
break;
case 'c':cout<<"Wrong answer\n The correct answer is Ghazipur";
break;
case 'd':cout<<"Correct answer" ;score=score+5;
break;
}
cout<<"Q4.Which city is called The city of lake?\n";
cout<<"a.Lucknow"<<'\n'<<"b.Bhopal"<<'\n'<<"c.Nagpur"<<'\n'<<"d.Raipur";
cin>>ch;
switch(ch)
{
case 'a':cout<<"Wrong answer\n The correct answer is Bhopal";
break;
case 'b':cout<<"Correct answer" ;score=score+5;
break;
case 'c':cout<<"Wrong answer\n The correct answer is Bhopal";
break;
case 'd':cout<<"Wrong answer\n The correct answer is Bhopal";
break;
}
cout<<"Q5.Which country has the highest population?\n";
cout<<"a.India"<<'\n'<<"b.America"<<'\n'<<"c.China"<<'\n'<<"d.Japan";
cin>>ch;
switch(ch)
{
case 'a':cout<<"Wrong answer\n The correct answer is China";
break;
case 'b':cout<<"Wrong answer\n The correct answer is China";
break;
case 'c':cout<<"Correct answer" ;score=score+5;
break;
case 'd':cout<<"Wrong answer\n The correct answer is China";
break;
}
cout<<"Q6.Who is known as The Father of the Nation?\n";
cout<<"a.Mahatma Gandhi"<<'\n'<<"b.Jawahar Lal Nehru"<<'\n'<<"c.Rabindra Nath Tagore"<<'\n'<<"d.Md.Ali Jinna";
cin>>ch;
switch(ch)
{
case 'a':cout<<"Correct answer" ;score=score+5;
break;
case 'b':cout<<"Wrong answer\n The correct answer is Mahatma Gandhi";
break;
case 'c':cout<<"Wrong answer\n The correct answer is Mahatma Gandhi";
break;
case 'd':cout<<"Wrong answer\n The correct answer is Mahatma Gandhi";
break;
}
cout<<"Q7.Who played the main lead in the movie Lagan?\n";
cout<<"a.Salman Khan"<<'\n'<<"b.Amir Khan"<<'\n'<<"c.Shahrukh Khan"<<'\n'<<"d.Amitabh Bachan";
cin>>ch;
switch(ch)
{
case 'a':cout<<"Wrong answer\n The correct answer is Amir Khan";
break;
case 'b':cout<<"Correct answer" ;score=score+5;
break;
case 'c':cout<<"Wrong answer\n The correct answer is Amir Khan";
break;
case 'd':cout<<"Wrong answer\n The correct answer is Amir Khan";
break;
}
cout<<"Q8.Which city in India is known as 'the silicon city?'\n";
cout<<"a.Banglore"<<'\n'<<"b.Hyderabad"<<'\n'<<"c.Chennai"<<'\n'<<"d.Pune";
cin>>ch;
switch(ch)
{
case 'a':cout<<"Correct answer" ;score=score+5;
break;
case 'b':cout<<"Wrong answer\n The correct answer is Banglore";
break;
case 'c':cout<<"Wrong answer\n The correct answer is Banglore";
break;
case 'd':cout<<"Wrong answer\n The correct answer is Banglore";
break;
}
cout<<"Q9.What is the full form of WHO?\n";
cout<<"a.World Health Organisation"<<'\n'<<"b.World Human Organisation"<<'\n'<<"c.Wild Heritage Organisation"<<'\n'<<"d.Women Helpers Organisation";
cin>>ch;
switch(ch)
{
case 'a':cout<<"Correct answer" ;score=score+5;
break;
case 'b':cout<<"Wrong answer\n The correct answer is World Health Organisation ";
break;
case 'c':cout<<"Wrong answer\n The correct answer is World Health Organisation ";
case 'd':cout<<"Wrong answer\n The correct answer is World Health Organisation";
break;
}
cout<<"Q10.Which city is known as 'The city of Nawabs'?\n";
cout<<"a.Kolkata"<<'\n'<<"b.Lucknow"<<'\n'<<"c.Delhi"<<'\n'<<"d.Mumbai";
cin>>ch;
switch(ch)
{
case 'a':cout<<"Wrong answer\n The correct answer is Lucknow";
break;
case 'b':cout<<"Correct answer" ;score=score+5;
break;
case 'c':cout<<"Wrong answer\n The correct answer is Lucknow";
case 'd':cout<<"Wrong answer\n The correct answer is Lucknow";
break;
}
cout<<endl;
cout<<"Total score="<<score;
}
