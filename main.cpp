#include <iostream>

using namespace std;

class books
{
private:
    int copies;
    string author;
    string title;
    string publisher;
    float price;


public:
    books(int c, string a, string t, string pu, float p)
    {
        copies=c;
        author=a;
        title=t;
        publisher=pu;
        price=p;

    };
    void sell(int number)
    {
        char input=0;
        if(copies>=number)
        {
            cout << "Author: " << author << endl;
            cout << "Title: " << title << endl;
            cout << "Publisher: " << publisher << endl;
            cout << "Copies requested: " << number << endl;
            cout << "Price per unit: "<< price << "$" <<endl;
            cout << "Total: " << price*number << "$" << endl;
            cout << "Proceed? Y/N" << endl;
            while(input!='Y'&&input!='N')
            {
            cin >> input;
            };
            if(input=='Y')
            {
            copies-=number;
            }else
            {
            cout << "Exiting...";
            };


        }else
        {
            cout << "Insufficient number of copies in stock to buy " <<number << " of copies of " <<"'"<< title <<"'"<<"."<<  endl;
            cout << "Exiting...";
        }

    }

};


int main()
{
    books bk1(5, "William Shakespeare", "Macbeth", "XYZ", 15);
    books bk2(2, "Charles Dickens", "A Christmas Carol", "ABC", 9.99);
    bk1.sell(2);
    bk2.sell(3);
    return 0;
}
