//============shopping item adding, remove and display item ====================

#include <iostream>

using namespace std;

const int m =50 ;

//==========================class Item declaration =================

class ITEM
{
    int itemCode[m];
    float itemPrice[m];
    int count;

  public:
    void CNT(void){count =0;}
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItem(void);
};

//==============================getItem =====================
void ITEM :: getitem(void)
{
    cout<<"Enter item code :";
    cin >>itemCode[count];

    cout<<"Enter item cost :";
    cin>>itemPrice[count];

    count++;
}

//=====================displaySum ========================
void ITEM :: displaySum(void)
{
    float sum =0;
    for(int i=0; i<count; i++){
        sum =sum +itemPrice[i];
     }
    cout<<"\n Total value :"<<sum<<"\n";
}

//===================remove function ====================
void ITEM :: remove(void){
    int a;
    cout << "Enter item code :";
    cin>>a;

    for(int i=0; i<count;i++){
        if(itemCode[i]==a)
            itemPrice[i]=0;
    }
}

//==================Display Item member function ========================
void ITEM :: displayItem(void){
    cout<<"\nCode Price\n";

    for(int i=0; i<count;i++){
        cout <<"\n "<< itemCode[i];
        cout<< " "<< itemPrice[i];

    }
    cout <<"\n";
}

//===========Main start here ============================

int main()
{
    ITEM order;
    order.CNT();
    int x;
    do
    {
        cout<<"\n You can do the following;"<<"Enter appropriate number \n";
        cout<<"\n1:Add an Item";
        cout<<"\n2:Display total value";
        cout<<"\n3:Delete an item";
        cout<<"\n4:Display all item";
        cout<<"\n5 Quit\n";
        cout<<"\n What is your option";

        cin>>x;

        switch (x)
        {
            case 1:order.getitem();

                break;
            case 2:order.displaySum();
                break;
            case 3:order.remove();
                break;
            case 4:order.displayItem();
                break;
            case 5:
                break;

            default:
                cout<<"Error in input; try agin\n";

        }
    }while(x !=5);


    return 0;
}

