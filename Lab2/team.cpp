    #include <iostream>

    using namespace std;
    int main()
    {


            int x,y,z,tc,increment;
            cin>>tc;
            while(tc--)
            {
                cin>>x>>y>>z;
                if((x==1 && y==1)||(y==1 && z==1)||(x==1 && z==1))
                    increment++;

            }
            cout<<increment<<endl;

            return 0;

    }











