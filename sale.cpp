#include<iostream>
#include<cstdlib>
using namespace std;
int op;
int c=0;
int operation()
{
    cout<<"Please choose one of the following operations"<<endl;
    cout<<"1 to add a product"<<endl;
    cout<<"2 to view the products"<<endl;
    cout<<"3 to sell a product"<<endl;
    cout<<"4 to check empty space"<<endl;
    cout<<"5 to exit"<<endl;
    cin>>op;
    return op;

}
struct products
{
    std::string name;
    int quantity;
    float price;

};
int main()
{
    products arr[100];
    cout<<"Welcome To your products manager"<<endl<<endl;
    begin:
    operation();


    switch (op)
    {
        case 1:
            cout<<"You choose to add a product"<<endl<<endl;
        for(int i = (1+c) ; i <= 100 ; i++)
         {
             if(i>100)
             {
                 cout<<"You exceed the number of your products"<<endl;
             }
             else
             {

                  cout<<"Please enter the name of the product no."<<i<<endl;
                  cin>>arr[i].name;
                  if(arr[i].name==arr[i-1].name)
                  {
                    cout<<"The products can't have the same name"<<endl<<endl;
                  }
                  else
                  {
                  cout<<"Now please enter the quantity of "<<arr[i].name<<endl;
                  cin>>arr[i].quantity;
                  cout<<"Now please enter the price of "<<arr[i].name<<endl;
                  cin>>arr[i].price;
                  cout<<"Product is successfully added"<<endl<<endl;
                  c++;
                  goto begin;
                  }

             }
             }
        break;

        case 2:

            cout<<"You choose to view the products"<<endl<<endl;
            if(c==0)
                {
                    cout<<"You have no products yet"<<endl<<endl;
                    goto begin;
                }
                else
                {
                  for(int i =1 ; i <=c ; i++)
                {

                    cout<<"Product no."<<i<<" name is "<<arr[i].name<<endl;
                    cout<<"Product no."<<i<<" quantity is "<<arr[i].quantity<<endl;
                    cout<<"Product no."<<i<<" price is "<<arr[i].price;
                    cout<<endl<<endl;

                }
                    goto begin;
                }

        break;

        case 3:
             char y[100];
             int z;
             cout<<"You choose to sell a product"<<endl<<endl;
             cout<<"Please enter the product's name to be sold"<<endl;
             cin>>y;
             for(int i =1 ; i <=c ; i++)
             {
            if (y==arr[i].name)
             {
                  cout<<"Your product is found now please enter the quantity to be sold"<<endl;
                  cin>>z;
                  if (z>arr[i].quantity)
                  {
                      cout<<"The products number shouldn't be less than the sold ones"<<endl<<endl;
                  }
                  else
                  {

                  cout<<"The ramming quantity is "<<arr[i].quantity-z<<endl<<endl;
                  arr[i].quantity=arr[i].quantity-z;
                  cout<<"Total selling price is "<<arr[i].price*z<<endl<<endl;
                  }
             }

             else
                cout<<"The product is not found"<<endl<<endl;
             }
             goto begin;
             break;

        case 4:
             cout<<"You choose to check the empty space"<<endl<<endl;
             cout<<"You still have "<<100-c<<" empty space"<<endl<<endl;
            goto begin;
            break;

        case 5:
            cout<<"You choose to Terminate the program"<<endl<<endl;
            exit(0);


}
return 0;
}
