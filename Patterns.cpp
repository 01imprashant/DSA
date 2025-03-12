#include<iostream>
using namespace std;
int main(){


       int n;
       cin>>n;
       //Outer loop->row
       for(int row=0;row<n;row++){
        //Inner loop->col
        for(int col=0;col<n-row-1;col++){
          cout<<" ";
        }
        for(int col=0;col<2*row+1;col++){
          cout<<"*";
        }
        cout<<endl;
       }


       

      //  for(int row=0;row<n;row++){
        
      //   for(int col=row+1;col<=n;col++){
           
      //     if(row==0||col==row+1||col==n){
      //       cout<<col<<" ";
            
      //     }
      //     else{
      //       cout<<"  ";
      //     }
      //   }
      //   cout<<endl;
      //  }



      //  for(int row=0;row<n;row++){
      //   for(int col=0;col<row+1;col++){
      //     if(row==0||row==n-1||col==0||col==row+1-1){
      //       cout<<col+1<<" ";
      //     }
      //     else{
      //       cout<<"  ";
      //     }
      //   }
      //   cout<<endl;
      //  }



      
      //  for(int row=0;row<n;row++){

      //   for(int col=0;col<row+1;col++){
      //     cout<<"* ";
      //   }
      //   cout<<endl;
      //  }

      //  for(int row=0;row<n;row++){

      //     for(int col=0;col<n-row-1;col++){
      //     cout<<"* ";
      //   }
      //   cout<<endl;
      //  }
     



      //  //Outer loop
      //  for(int row=1;row<=n;row++){
      //   //Inner loop
      //    int count=1;
      //   for(int col=1;col<=row;col++){
      //     cout<<count<<" ";
      //     count=count*(row-col)/col;
      //   }
      //   cout<<endl;
      //  }



      //  int count=1;



      //  //Outer loop
      //  for(int row=0;row<n;row++){
      //   //Inner loop
      //   for(int col=0;col<row+1;col++){
      //     cout<<count<<" ";
      //     count++;
      //   }
      //   cout<<endl;
      //  }



  //   for(int row=0; row<n; row=row+1) {
	// 	char ch;
	// 	for(int col=0; col<row+1; col=col+1) {
	// 		int number = col+1;
	// 		 ch = number + 'A' -1;
	// 		cout << ch<<" ";
	// 	}
  
	// 	//jab tak A tk nahi pohochte
	// 	//tab tk print krenge 

	// 	for(char alphabet = ch; alphabet>'A'; ) {
	// 		alphabet= alphabet-1;
	// 		cout << alphabet<<" ";
	// 	}
	// 	cout << endl;
	// }


      //  int n=num/2;

      //  //Outer loop
      //  for(int row=0;row<n;row++){
      //   //Innner loop
      //   for(int col=0;col<row+1;col++){
      //     cout<<"* ";
      //   }
      //   for(int col=0;col<2*n-2*row-2;col++){
      //     cout<<"  ";
      //   }
      //   for(int col=0;col<row+1;col++){
      //     cout<<"* ";
      //   }
      //   cout<<endl;
      //  }

      //  //Outer loop
      //  for(int row=0;row<n;row++){
      //   //Innner loop
      //   for(int col=0;col<n-row;col++){
      //     cout<<"* ";
      //   }
      //   for(int col=0;col<2*row;col++){
      //     cout<<"  ";
      //   }
      //   for(int col=0;col<n-row;col++){
      //     cout<<"* ";
      //   }
      //   cout<<endl;
      //  }



      //   //Outer loop
      //  for(int row=0;row<n;row++){
      //   //for loop for stars
      //   for(int col=0;col<2*n-row-2;col++){
      //     cout<<"*";
      //   }
      //   //for loop for character
      //   for(int col=0;col<2*row+1;col++){
      //    cout<<row+1;
      //   }
      //   //for loop for stars
      //   for(int col=0;col<2*n-row-2;col++){
      //     cout<<"*";
      //   }
      //   cout<<endl;
      //  }



    //  //Outer loop
    //  for(int row=0;row<n;row++){
    //      //Inner loop
    //      for(int col=0;col<row+1;col++){
    //        cout<<"* ";
    //      }
    //      cout<<endl;
    //  }



    //  for(int row=0;row<n-1;row++){
    //   for(int col=0;col<n-row-1;col++){
    //     cout<<"* ";
    //   }
    //   cout<<endl;
    //  }


      // //Outer loop
      // for(int row=0;row<n;row++){
      //   //Inner loop
      //   for(int col=0;col<n-row;col++){
      //     cout<<"  ";
      //   }
      //   int count=1;
      //   for(int col=0;col<row+1;col++){
      //     cout<<count<<" ";
      //     count++;
      //   }
      //   count=count-2;
      //   for(int col=0;col<row;col++){
      //     cout<<count<<" ";
      //     count--;
          
      //   }
      //   cout<<endl;
      // }




      // int count=1;
       

      // //Outer loop
      // for(int row=0;row<n;row++){
      //   //Inner loop
        
      //   for(int col=0;col<row+1;col++){
      //     cout<<count<<" ";
      //     count++;
      //   }
      //   cout<<endl;
      // } 



      // //Outer loop
      // for(int row=0;row<n;row++){
      //   //Inner loop
      //   int count=row+1;
      //   for(int col=0;col<n-row;col++){
      //     if(row==0||col==0||col==n-row-1){
      //       cout<<count<<" ";
      //       count++;
      //     }
      //     else{
      //       cout<<"  ";
      //       count++;
      //     }
      //   }
      //   cout<<endl;
      // } 



      //  //Outer loop 
      //  for(int row=0;row<n;row++){
      //   //Inner loop
      //   int count=1;
      //   for(int col=0;col<row+1;col++){
         
      //    if(col==0||col==row+1-1||row==n-1){
      //     cout<<count<<" ";
      //     count++;
      //      }
         
      //    else{
      //     cout<<"  ";
      //     count++;
      //     }
      //   }
      //   cout<<endl;
      //  }




      //  //Outer loop->row
      //  for(int row=0;row<n;row=row+1){
      //   //Inner loopchar 
      //   for(int col=0;col<row+1;col=col+1){
      //     char ch=col+'A';
      //     cout<<ch<<" ";
      //     }
      //     cout<<endl;
      //   }



      //  //Outer loop
      //  for(int row=0;row<n;row=row+1){
      //   //Inner loop
      //   for(int col=0;col<n-row;col=col+1){
      //     if(row==0||col==0||col==n-row-1){
      //       cout<<"*";
      //     }
      //     else{
      //       cout<<" ";
      //     }
      //   }
      //   cout<<endl;
      // }



      //  //Outer loop
      //  for(int row=0;row<n;row=row+1){
      //   //Inner loop
      //   for(int col=0;col<2*row+1;col=col+1){
      //     if(col%2==1){
      //       cout<<"*";
      //     }
      //     else{
      //       cout<<row+1;
      //     }
      //   }
      //   cout<<endl;
      //  }




      // for(int row=0;row<n;row=row+1){
      //   //Inverted Pyramid 1
      //   for(int col=0;col<n-row;col=col+1){
      //     cout<<"*";
      //   }
      //   //Full Pyramid 1
      //   for(int col=0;col<2*row+1;col=col+1){
      //     cout<<" ";
      //   }
      //   //Inverted Pyramid 2
      //   for(int col=0;col<n-row;col=col+1){
      //     cout<<"*";
      //   }
      //   cout<<endl;
      //  }

      //    for(int row=0;row<n;row=row+1){
      //   //Inverted Pyramid 1
      //   for(int col=0;col<row+1;col=col+1){
      //     cout<<"*";
      //   }
      //   //Full Pyramid 1
      //   for(int col=0;col<2*n-2*row-1;col=col+1){
      //     cout<<" ";
      //   }
      //   //Inverted Pyramid 2
      //   for(int col=0;col<row+1;col=col+1){
      //     cout<<"*";
      //   }
      //   cout<<endl;
      //  }

 





      //  //Outer loop 
      //  for(int row=0;row<n;row=row+1){
      //   //Inner loop
      //   for(int col=0;col<n-row-1;col=col+1){
      //     cout<<" ";
      //   }
      //   for(int col=0;col<row+1;col=col+1){
      //     if(col==0||col==row+1-1){
      //       cout<<"* ";
      //     }
      //     else{
      //       cout<<"  ";
      //     }
      //   }
      //   cout<<endl;
      //  }

 

      //  //Outer loop 
      //  for(int row=0;row<n;row=row+1){
      //   //Inner loop
      //   for(int col=0;col<row;col=col+1){
      //     cout<<" ";
      //   }
      //   for(int col=0;col<n-row;col=col+1){
      //     if(col==0||col==n-row-1){
      //       cout<<"* ";
      //     }
      //     else{
      //       cout<<"  ";
      //     }
      //   }
      //   cout<<endl;
      //  }


 
      //  //Outer loop 
      //  for(int row=0;row<n;row=row+1){
      //   //Inner loop
      //   for(int col=0;col<row;col=col+1){
      //     cout<<" ";
      //   }
      //   for(int col=0;col<n-row;col=col+1){
      //     cout<<"* ";
      //   }
      //   cout<<endl;
      //  }



      //   for(int row=0;row<n;row=row+1){
      //   //for spaces
      //   for(int col=0;col<n-row-1;col=col+1){
      //     cout<<" ";
      //   }
      //   //for stars
      //   for(int col=0;col<row+1;col=col+1){
      //     //print star in 1st col and last col
      //     if(col==0||col==row+1-1){
      //        cout<<"* ";
      //     }
      //     else{
      //       //print space in all other col
      //       cout<<"  ";
      //     }

      //   }      

      //   cout<<endl;
      // } 





      //  //Outer loop->row
      //  for(int row=0;row<n;row=row+1){
      //   //Inner loop->col
      //   for(int col=0;col<n-row;col=col+1){
      //     if(row==0||row==n-1){
      //       cout<<"* ";
      //     }
      //     else{
      //       if(col==0||col==n-row-1){
      //         cout<<"* ";
      //       }
      //       else{
      //         cout<<"  ";
      //       }
      //     }
      //   }
      //   cout<<endl;
      //  }




      //  //Outer loop-> row
      //  for(int row=0;row<n;row=row+1){
      //   //Inner loop-> col
      //   for(int col=0;col<2*row+1;col=col+1){
      //      if(col%2==1){
      //       cout<<"* ";
      //      }
      //      else{
      //       cout<<row+1<<" ";
      //      }
      //   }
      //   cout<<endl;
      //  }




      //  int num;
      //  cin>>num;
      //  int n=num/2;


      //  for(int row=0;row<n;row=row+1){
      //   //Inverted Pyramid 1
      //   for(int col=0;col<n-row;col=col+1){
      //     cout<<"* ";
      //   }

      //   //Full Pyramid 1
      //   for(int col=0;col<2*row+1;col=col+1){
      //     cout<<"  ";
      //   }

      //   //Inverted Pyramid 2
      //   for(int col=0;col<n-row;col=col+1){
      //     cout<<"* ";
      //   }
      //   cout<<endl;
      //  }

      //   for(int row=0;row<n;row=row+1){
      //   //Inverted Pyramid 1
      //   for(int col=0;col<row+1;col=col+1){
      //     cout<<"* ";
      //   }

      //   //Full Pyramid 1
      //   for(int col=0;col<2*n-2*row-1;col=col+1){
      //     cout<<"  ";
      //   }

      //   //Inverted Pyramid 2
      //   for(int col=0;col<row+1;col=col+1){
      //     cout<<"* ";
      //   }
      //   cout<<endl;
      //  }



       
      //  int num;
      //  cin>>num;
      //  int n=num/2;
        
      //   for(int row=0;row<n;row=row+1){
      //   //for spaces
      //   for(int col=0;col<n-row-1;col=col+1){
      //     cout<<" ";
      //   }
      //   //for stars
      //   for(int col=0;col<row+1;col=col+1){
      //     //print star in 1st col and last col only
      //     if(col==0||col==row+1-1){
      //        cout<<"* ";
      //     }
      //     else{
      //       //print space in all other col
      //       cout<<"  ";
      //     }

      //   }      

      //   cout<<endl;
      //  }

      //   for(int row=0;row<n;row=row+1){
      //   //for spaces
      //   for(int col=0;col<row;col=col+1){
      //     cout<<" ";
      //   }
      //   //for stars
      //   for(int col=0;col<n-row;col=col+1){
      //     //print star in 1st col and last col
      //     if(col==0||col==n-row-1){
      //        cout<<"* ";
      //     }
      //     else{
      //       //print space in all other col
      //       cout<<"  ";
      //     }

      //   }      

      //   cout<<endl;
      //  }





      //   for(int row=0;row<n;row=row+1){
      //   //for spaces
      //   for(int col=0;col<row;col=col+1){
      //     cout<<" ";
      //   }
      //   //for stars
      //   for(int col=0;col<n-row;col=col+1){
      //     //print star in 1st col and last col
      //     if(col==0||col==n-row-1){
      //        cout<<"* ";
      //     }
      //     else{
      //       //print space in all other col
      //       cout<<"  ";
      //     }

      //   }      

      //   cout<<endl;
      //  }




      //   for(int row=0;row<n;row=row+1){
      //   //for spaces
      //   for(int col=0;col<n-row-1;col=col+1){
      //     cout<<" ";
      //   }
      //   //for stars
      //   for(int col=0;col<row+1;col=col+1){
      //     //print star in 1st col and last col only
      //     if(col==0||col==row+1-1){
      //        cout<<"* ";
      //     }
      //     else{
      //       //print space in all other col
      //       cout<<"  ";
      //     }

      //   }      

      //   cout<<endl;
      //  }




      //  int num;
      //  cin>>num;
      //  int n=num/2;


      //   for(int row=0;row<n;row=row+1){
      //   //for spaces
      //   for(int col=0;col<n-row-1;col=col+1){
      //     cout<<" ";
      //   }
      //   //for stars
      //   for(int col=0;col<row+1;col=col+1){
      //     cout<<"* ";
      //   }      

      //   cout<<endl;
      //  }

      //   for(int row=0;row<n;row=row+1){
      //   //printing space
      //   for(int col=0;col<row;col=col+1){
      //     cout<<" ";
      //   }
      //   //printing stars
      //   for(int col=0;col<n-row;col=col+1){
      //     cout<<"* ";
      //   }
      //   cout<<endl;
      //  }




      
      //  //Outer loop->row
      //  for(int row=0;row<n;row=row+1){
      //   //printing space
      //   for(int col=0;col<row;col=col+1){
      //     cout<<" ";
      //   }
      //   //printing stars
      //   for(int col=0;col<n-row;col=col+1){
      //     cout<<"* ";
      //   }
      //   cout<<endl;
      //  }





      // int n;
      // cin>>n;

      // //Outer loop->row
      // for(int row=0;row<n;row=row+1){
      //   //for spaces
      //   for(int col=0;col<n-row-1;col=col+1){
      //     cout<<" ";
      //   }
      //   //for stars
      //   for(int col=0;col<row+1;col=col+1){
      //     cout<<"* ";
      //   }
      //   cout<<endl;
      //  }


      // int n;
      // cin>>n;

      // //Outer loop->row
      // for(int row=0;row<n;row=row+1){
      //    //Inner loop->col
      //    for(int col=0;col<n-row;col=col+1){
      //        cout<<col+1<<" ";
      //    }
      //   cout<<endl;
      // }
          


    //  int n;
    //  cin>>n;

    // //Outer loop->row
    // for(int row=0;row<n;row=row+1){
    //     //Inner loop->col
    //     for(int col=0;col<row+1;col=col+1){
    //         cout<<col+1<<"  ";
    //     }
    //     cout<<endl;
    // }



    //  int n;
    //  cin>>n;

    //  //Outer loop->row
    //  for(int row=0;row<n;row=row+1){
    //      //Inner loop->col
    //      for(int col=0;col<n-row;col=col+1){
    //          cout<<"* "<<" ";
    //      }
    //      cout<<endl;
    //  }
    


    // int n;
    // cin>>n;

    //  //Outer loop->row
    //  for(int row=0;row<n;row=row+1){
    //     //Inner loop->col
    //     for(int col=0;col<row+1;col=col+1){
    //         cout<<"* "<<" ";
    //     }
    //     cout<<endl;

    //  }




    //  int ROW=10;
    //  int COL=8;


    // // //Outer Loop-->rows
    //  for(int row=0;row<ROW;row=row+1){
    //      //Inner loop-->col
    //      for(int col=0;col<COL;col=col+1){
    //     //1st row and last row print "*"
    //          if (row==0||row==ROW-1)
    //          {
    //              cout<<"* "<<" ";
    //          }
    //          else{
    //              if(col==0||col==COL-1){
    //                  cout<<"* "<<" ";
    //              }
    //              else{
    //                  cout<<"  "<<" ";
    //              }
    //          } 
    //      }
    //      cout<<endl;
    // }




    // //Outer loop->row
    // for(int row=0;row<5;row=row+1){
    //   //Inner loop->col
    //   for(int col=0;col<5;col=col+1){
    //     if(row==0||row==4){
    //       cout<<"* "<<" ";
    //     }
    //     else{
    //       if(col==0||col==4){
    //         cout<<"* "<<" ";
    //       }
    //       else{
    //         cout<<"  "<<" ";
    //       }
    //     }
    //   }
    //   cout<<endl;
    // }



    // //outer loop
    // for(int i=0;i<3;i=i+1){
    //     //Inner loop
    //     for(int j=0;j<6;j=j+1){
    //         cout<<"* "<<" "; 
    //     }
    //     cout<<endl;
    // }



    // //outer loop
    // for(int i=0;i<3;i=i+1){
    //     //Inner loop
    //     for(int j=0;j<3;j=j+1){
    //         cout<<"* "<<" ";
    //     }
    //     cout<<endl;
    // }

    

    // //Outer loop-->row
    // for(int i=0;i<3;i=i+1){
    //     //Inner loop-->col
    //     for(int j=0;j<5;j=j+1){
    //         cout<<"* "<<" ";
    //     }
    //     cout<<endl;
    // }
 


    // //outer loop-->row
    // for(int i=0;i<4;i=i+1){
    //     //Inner loop-->col
    //     for(int j=0;j<4;j=j+1){
    //         cout<<"* "<<" ";
    //     }
    //     cout<<endl;
    // }


    return 0;
}