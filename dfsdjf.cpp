 #include<bits/stdc++.h>
 using namespace std;
        class data
        {
        public:
            int grid[2][2];

            void A()
            {
                for(int i=0;i<2;i++)
                {
                    for(int j=0;j<2;j++)
                    {
                        grid[i][j] = 0; 
                    }
                }
            }
        };





    signed main() {
         
        
        int n=5,m=5;
        
        vector<vector<data>>col(2 , vector<data>(2));
        
        data temp;
        
        temp.grid[0][0] = 1;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 3;
        temp.grid[1][1] = 2;
        col[0][0] = temp;
        
        temp.grid[0][0] = 1;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 4;
        temp.grid[1][1] = 1;
        col[0][1] = temp;
        temp.grid[0][0] = 4;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 4;
        temp.grid[1][1] = 2;
        col[0][2] = temp;
        temp.grid[0][0] = 1;
        temp.grid[0][1] = 1;
        temp.grid[1][0] = 4;
        temp.grid[1][1] = 1;
        col[0][3] = temp;
        temp.grid[0][0] = 1;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 2;
        temp.grid[1][1] = 4;
        col[0][3] = temp;
        temp.grid[0][0] = 1;
        temp.grid[0][1] = 1;
        temp.grid[1][0] = 3;
        temp.grid[1][1] = 1;
        col[1][0] = temp;
        temp.grid[0][0] = 4;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 3;
        temp.grid[1][1] = 3;
        col[1][1] = temp;
        temp.grid[0][0] = 1;
        temp.grid[0][1] = 1;
        temp.grid[1][0] = 1;
        temp.grid[1][1] = 3;
        col[1][2] = temp;
        temp.grid[0][0] = 4;
        temp.grid[0][1] = 1;
        temp.grid[1][0] = 2;
        temp.grid[1][1] = 1;
        col[1][3] = temp;
        temp.grid[0][0] = 3;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 2;
        temp.grid[1][1] = 4;
        col[1][4] = temp;
        temp.grid[0][0] = 1;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 4;
        temp.grid[1][1] = 4;
        col[2][0] = temp;
        temp.grid[0][0] = 4;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 3;
        temp.grid[1][1] = 1;
        col[2][1] = temp;
        temp.grid[0][0] = 1;
        temp.grid[0][1] = 1;
        temp.grid[1][0] = 2;
        temp.grid[1][1] = 1;
        col[2][2] = temp;
        temp.grid[0][0] = 4;
        temp.grid[0][1] = 1;
        temp.grid[1][0] = 4;
        temp.grid[1][1] = 1;
        col[2][3] = temp;
        temp.grid[0][0] = 3;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 3;
        temp.grid[1][1] = 1;
        col[2][4] = temp;
        temp.grid[0][0] = 4;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 3;
        temp.grid[1][1] = 3;
        col[3][0] = temp;
        temp.grid[0][0] = 4;
        temp.grid[0][1] = 1;
        temp.grid[1][0] = 2;
        temp.grid[1][1] = 1;
        col[3][1] = temp;
        temp.grid[0][0] = 1;
        temp.grid[0][1] = 4;
        temp.grid[1][0] = 1;
        temp.grid[1][1] = 2;
        col[3][2] = temp;
        temp.grid[0][0] = 3;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 3;
        temp.grid[1][1] = 1;
        col[3][3] = temp;
        temp.grid[0][0] = 4;
        temp.grid[0][1] = 4;
        temp.grid[1][0] = 4;
        temp.grid[1][1] = 1;
        col[3][4] = temp;
        temp.grid[0][0] = 3;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 2;
        temp.grid[1][1] = 2;
        col[4][0] = temp;
        temp.grid[0][0] = 1;
        temp.grid[0][1] = 4;
        temp.grid[1][0] = 2;
        temp.grid[1][1] = 4;
        col[4][1] = temp;
        temp.grid[0][0] = 3;
        temp.grid[0][1] = 4;
        temp.grid[1][0] = 3;
        temp.grid[1][1] = 4;
        col[4][2] = temp;
        temp.grid[0][0] = 1;
        temp.grid[0][1] = 3;
        temp.grid[1][0] = 3;
        temp.grid[1][1] = 1;
        col[4][3] = temp;
        temp.grid[0][0] = 2;
        temp.grid[0][1] = 4;
        temp.grid[1][0] = 2;
        temp.grid[1][1] = 4;
        col[4][4] = temp;


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                for(int k=0;k<2;k++)
                {
                    for(int l= 0;l<2;l++)
                    {
                        cin >> col[i][j].grid[k][l];
                    }
                }
            }
        }

        int cntr = 0;
        int cntb = 0;
        int cnty =0;
        int cntg  = 0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                //i j
                set<int> ad;
                for(int k=0;k<2;k++)
                {
                    for(int l=0;l<2;l++)
                    {
                        ad.insert(col[i][j].grid[k][l]);
                    }
                }

                if(ad.size()==4)
                    continue;
                if(ad.size()==1)
                {
                    int vl = *ad.begin();
                    cntr+=4*(vl==1);
                    cnty+=4*(vl==2);
                    cntb+=4*(vl==3);
                    cntg+=4*(vl==4);
                    continue;
                }

                if(ad.size()==3)
                {
                    //only 2
                    if(col[i][j].grid[0][0]==col[i][j].grid[0][1] || col[i][j].grid[0][0]==col[i][j].grid[1][0])
                    {
                    int vl = col[i][j].grid[0][0];
                    cntr+=2*(vl==1);
                    cnty+=2*(vl==2);
                    cntb+=2*(vl==3);
                    cntg+=2*(vl==4);
                    continue;

                    }

                    if(col[i][j].grid[1][1]==col[i][j].grid[0][1] || col[i][j].grid[1][1]==col[i][j].grid[1][0])
                    {
                        int vl = col[i][j].grid[1][1];
                    cntr+=2*(vl==1);
                    cnty+=2*(vl==2);
                    cntb+=2*(vl==3);
                    cntg+=2*(vl==4);
                    continue;

                    }

                    continue;

                
                }


                //check for three

                if(col[i][j].grid[0][0]==col[i][j].grid[1][1] && (col[i][j].grid[0][0]==col[i][j].grid[1][0] || col[i][j].grid[0][0]==col[i][j].grid[0][1]))
                {
                    int vl = col[i][j].grid[1][1];
                    cntr+=3*(vl==1);
                    cnty+=3*(vl==2);
                    cntb+=3*(vl==3);
                    cntg+=3*(vl==4);
                    continue;

                }

                if(col[i][j].grid[1][0]==col[i][j].grid[0][1] && (col[i][j].grid[0][0]==col[i][j].grid[1][0] || col[i][j].grid[1][1]==col[i][j].grid[1][0]))
                {
                    int vl = col[i][j].grid[1][0];
                    cntr+=3*(vl==1);
                    cnty+=3*(vl==2);
                    cntb+=3*(vl==3);
                    cntg+=3*(vl==4);
                    continue;

                }

                //check for 2
                if(col[i][j].grid[0][0]==col[i][j].grid[1][0])
                {
                    int vl = col[i][j].grid[0][0];
                    cntr+=2*(vl==1);
                    cnty+=2*(vl==2);
                    cntb+=2*(vl==3);
                    cntg+=2*(vl==4);
                }

                if(col[i][j].grid[1][0]==col[i][j].grid[1][1])
                {
                    int vl = col[i][j].grid[1][0];
                    cntr+=2*(vl==1);
                    cnty+=2*(vl==2);
                    cntb+=2*(vl==3);
                    cntg+=2*(vl==4);
                }

                if(col[i][j].grid[1][1]==col[i][j].grid[0][1])
                {
                    int vl = col[i][j].grid[1][1];
                    cntr+=2*(vl==1);
                    cnty+=2*(vl==2);
                    cntb+=2*(vl==3);
                    cntg+=2*(vl==4);
                }

                if(col[i][j].grid[0][1]==col[i][j].grid[0][0])
                {
                    int vl = col[i][j].grid[0][1];
                    cntr+=2*(vl==1);
                    cnty+=2*(vl==2);
                    cntb+=2*(vl==3);
                    cntg+=2*(vl==4);
                }
            }
        }


        vector<pair<int,string>> findans(4);

        findans[0] = {cntr , "RED"};
        findans[1] = {cnty , "YELLOW"};
        findans[2] = {cntb , "BLUE"};
        findans[3] = {cntg , "GREEN"};

        sort(findans.begin() , findans.end() , greater<pair<int,string>>());

        string ans = findans[0].second;
        int k=findans[0].first;
        cout<<ans<<"has max connected elements  i.e" <<k<<endl;
    }

