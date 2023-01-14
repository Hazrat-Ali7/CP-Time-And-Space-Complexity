#include<bits/stdc++.h>
using namespace std;

class Cuboid{
private:
    int length;;
    int width;
    int height;
public:
    Cuboid()
    {
        length=0;
        width=0;
        height=0;
    }
    Cuboid(int length,int width,int height)
    {
        this->length=length;
        this->width=width;
        this->height=height;
    }
    int getVolume()
    {
        return length*width*height;
    }
    int getSurfaceArea()
    {
        return 2*(length*width + length*height + width*height);
    }

    void print_cuboid()
    {
        cout<<"Length = "<< length << "\t";
        cout<<"Width = "<< width << "\t";
        cout<<"Height = "<< height << "\n";
        cout<<"Volume = "<< length*width*height << "\t";
        cout<<"Area = "<< 2*(length*width + length*height + width*height) << "\n";
    }
};

bool comp_by_vol(Cuboid a, Cuboid b)
{
    return a.getVolume() < b.getVolume();
}

bool comp_by_area(Cuboid a, Cuboid b)
{
    return a.getSurfaceArea() < b.getSurfaceArea();
}

int main()
{
    vector<Cuboid> a(5);
//random 5 obj;

    a[0]={4,2,1};
    a[1]={3,1,5};
    a[2]={9,4,3};
    a[3]={7,0,3};
    a[4]={3,2,8};

    cout<< "Before Any Sorting:\n";
    for(int i=0;i<5;i++)
    {
        cout<< "No "<< i+1 << " Cuboid:\n";
        a[i].print_cuboid();
        cout<<"\n";
    }

    sort(a.begin(),a.end(),comp_by_vol);

    cout<< "\n\n\nAfter Sorting by Volume:\n";
    for(int i=0;i<5;i++)
    {
        cout<< "No "<< i+1 << " Cuboid:\n";
        a[i].print_cuboid();
        cout<<"\n";
    }
    sort(a.begin(),a.end(),comp_by_area);

    cout<< "\n\n\nAfter Sorting by Area:\n";
    for(int i=0;i<5;i++)
    {
        cout<< "No "<< i+1 << " Cuboid:\n";
        a[i].print_cuboid();
        cout<<"\n";
    }
    return 0;
}
