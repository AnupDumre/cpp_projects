#include<iostream>
using namespace std;
class myclass
{
    private:
        int x;
    public:
        void setx(int i)
        {
            x=i;
        }
        int getx()
        {
            return x;
        }
};

int main()
{
    myclass classes[4];
    int i;
    for (i=0; i<4; i++)
    {
        classes[i].setx(i);
    }
    for(i=0;i<4;i++)
    {
        cout<<"classes["<<i<<"]: "<<classes[i].getx()<<endl;
    }
}

/* OUTPUT
classes[0]: 0
classes[1]: 1
classes[2]: 2
classes[3]: 3
*/