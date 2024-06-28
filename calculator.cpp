#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
#define SIZE 10
using namespace std;
class matrix{
	private:
	int i , j,m,n, row , col,choice;
	float a[10][10],b[10][10],mt[50][50];
	public:
		void addition();
		void subtraction();
		void multplication();
		void s_matrix();
		void Transpose();
		int Determinant();
		void Inverse();
		void eigen();
		void accept();
		void display();
		void gauss();
		void EnterJordan();
		void credits();
		void identity();
		void symmtreic();
};
void matrix::eigen(){
	float a[SIZE][SIZE], x[SIZE],x_new[SIZE];
	 float temp, lambda_new, lambda_old, error;
	 int i,j,n, step=1;

     cout<< setprecision(3)<< fixed;

	 cout<<"Enter Order of Matrix: ";
	 cin>>n;

   
	 cout<<"Enter Tolerable Error: ";
	 cin>>error;

	 cout<<"Enter Coefficient of Matrix: "<< endl;
	 for(i=0;i<n;i++)
	 {
		  for(j=0;j<n;j++)
		  {
			   cout<<"a["<< i<<"]"<< j<<"]= ";
               cin>>a[i][j];
		  }
	 }

	 cout<<"Enter Initial Guess Vector: "<< endl;
	 for(i=1;i<=n;i++)
	 {
		  cout<<"x["<< i<<"]= ";
		  cin>>x[i];
	 }


	 lambda_old = 1;

	 up:
	 for(i=1;i<=n;i++)
	 {
		  temp = 0.0;
		  for(j=1;j<=n;j++)
		  {
		   	temp = temp + a[i][j]*x[j];
		  }
		  x_new[i] = temp;
	 }

	 for(i=1;i<=n;i++)
	 {
	  	x[i] = x_new[i];
	 }

	 lambda_new = fabs(x[1]);
	 for(i=2;i<=n;i++)
	 {
		  if(fabs(x[i])>lambda_new)
		  {
		   	lambda_new = fabs(x[i]);
		  }
	 }

	 for(i=1;i<=n;i++)
	 {
	  	x[i] = x[i]/lambda_new;
	 }
	 
	 cout<< endl<< endl<<"\n\t-->> STEP-"<< step<< endl;
	 cout<<"\n\t-->> Eigen Value = "<< lambda_new<< endl;
	 cout<<"\n\t-->> Eigen Vector: ";
	 cout<<"[";
	 for(i=1;i<=n;i++)
	 {
	  	cout<< x[i]<<"\t";
	 }
     cout<<"\b\b\b]"; 
	 if(fabs(lambda_new-lambda_old)>error)
	 {
		  lambda_old=lambda_new;
		  step++;
		  goto up;
	 }
	cout<<"\n\n";
}
void matrix::addition(){
	cout << "\nEnter 1st matrix order\nROW = ";
    cin>>i;
    cout << "COL = ";
    cin>>j;
    cout << "\nEnter 2nd matrix order\nROW = ";
    cin>>m;
    cout << "COL = ";
    cin>>n;
   
	{
	 cout<<"\nEnter 1st matrix value\n";
    for(row=0;row<i;row++){
     for(col=0;col<j;col++){
    cout<<"a ["<<row<<"]["<<col<<"] = ";
    cin>>a[row][col];
    }
    }
    
    cout<<"\nEnter 2nd matrix \n";
    for(row=0;row<m;row++){
     for(col=0;col<n;col++){
    cout<<"b ["<<row<<"]["<<col<<"] = ";
    cin>>b[row][col];
    }}}
	int x,y;
	cout<<"\nenter multiplication value for 1st matrix \n value = ";
	cin>>x;
	cout<<"\nenter multiplication value for 2nd matrix \n value = ";
	cin>>y;
	if((i==m) && (j==n))
	{
	cout<<"\n 1st matrix\n";
    for(row=0;row<i;row++){
    for(col=0;col<j;col++){
    cout<<x*a[row][col]<<"   ";
    }
    cout<<"\n";
    }
    
    cout<<"\n 2nd matrix\n";
    for(row=0;row<m;row++){
    for(col=0;col<n;col++){
    cout<<y*b[row][col]<<"   ";
    }
    cout<<"\n";
    }
	cout<<"\n\n ADDITION MATRIX: \n";
    for(row=0;row<i;row++){
    for(col=0;col<j;col++){
    cout<<x*a[row][col]+y*b[row][col]<<"   ";
    }
    cout<<"\n";
    }	
	}
	else
	{
		cout<<"\n MATRIX CANNOT BE ADDED(rows and columns are not equal) ";	
	}
}
void matrix:: subtraction(){
	cout << "\nEnter 1st matrix order\nROW = ";
    cin>>i;
    cout << "COL = ";
    cin>>j;
    cout << "\nEnter 2nd matrix order\nROW = ";
    cin>>m;
    cout << "COL = ";
    cin>>n;
   
	{
	 cout<<"\nEnter 1st matrix value\n";
    for(row=0;row<i;row++){
     for(col=0;col<j;col++){
    cout<<"a ["<<row<<"]["<<col<<"] = ";
    cin>>a[row][col];
    }
    }
    
    cout<<"\nEnter 2nd matrix \n";
    for(row=0;row<m;row++){
     for(col=0;col<n;col++){
    cout<<"b ["<<row<<"]["<<col<<"] = ";
    cin>>b[row][col];
    }
    }	
	}
	int x,y;
	cout<<"\nenter multiplication value for 1st matrix \n value = ";
	cin>>x;
	cout<<"\nenter multiplication value for 2nd matrix \n value = ";
	cin>>y;
	if((i==m) && (j==n))
	{
	cout<<"\n 1st matrix\n";
    for(row=0;row<i;row++){
    for(col=0;col<j;col++){
    cout<<x*a[row][col]<<"   ";
    }
    cout<<"\n";
    }
    
    cout<<"\n 2nd matrix\n";
    for(row=0;row<m;row++){
    for(col=0;col<n;col++){
    cout<<y*b[row][col]<<"   ";
    }
    cout<<"\n";
    }
	cout<<"\n\n SUBTRACTION MATRIX \n";
    for(row=0;row<i;row++){
    for(col=0;col<j;col++){
     cout<<x*a[row][col]-y*b[row][col]<<"   ";
    }
    cout<<"\n";
    }	
	}
	else
	{ cout<<"\n MATRIX CANNOT BE SUBTRACTED (rows and columns are not equal)";	}
	}
void matrix::multplication(){
	cout << "\nEnter 1st matrix order\nROW = ";
    cin>>i;
    cout << "COL = ";
    cin>>j;
    cout << "\nEnter 2nd matrix order\nROW = ";
    cin>>m;
    cout << "COL = ";
    cin>>n;
   
	{
	 cout<<"\nEnter 1st matrix value\n";
    for(row=0;row<i;row++){
     for(col=0;col<j;col++){
    cout<<"a ["<<row<<"]["<<col<<"] = ";
    cin>>a[row][col];
    }
    }
    
    cout<<"\nEnter 2nd matrix \n";
    for(row=0;row<m;row++){
     for(col=0;col<n;col++){
    cout<<"b ["<<row<<"]["<<col<<"] = ";
    cin>>b[row][col];
    }}	}
	int x,y;
	cout<<"\nenter multiplication value for 1st matrix \n value = ";
	cin>>x;
	cout<<"\nenter multiplication value for 2nd matrix \n value = ";
	cin>>y;
	if((i==m)||(j==n))
	{
	cout<<"\n 1st matrix\n";
    for(row=0;row<i;row++){
    for(col=0;col<j;col++){
    cout<<x*a[row][col]<<"   ";
    }
    cout<<"\n";
    }
    cout<<"\n 2nd matrix\n";
    for(row=0;row<m;row++){
    for(col=0;col<n;col++){
    cout<<y*b[row][col]<<"   ";
    }
    cout<<"\n";
    }
	cout<<"\n\n MULTIPLICATION\n";
    for(row=0;row<i;row++){
    for(col=0;col<j;col++){
     cout<<x*a[row][col]*(y*b[row][col])<<"   ";
    }
    cout<<"\n";
    }	
	}
	
	else

	 { cout<<"\n MATRIX CANNOT BE MULTIPLIED "; }	
	} 
void matrix::s_matrix(){
	cout << "\nEnter 1st matrix order\nROW = ";
    cin>>i;
    cout << "COL = ";
    cin>>j;
    cout << "\nEnter 2nd matrix order\nROW = ";
    cin>>m;
    cout << "COL = ";
    cin>>n;
   
	{
	 cout<<"\nEnter 1st matrix value\n";
    for(row=0;row<i;row++){
     for(col=0;col<j;col++){
    cout<<"a ["<<row<<"]["<<col<<"] = ";
    cin>>a[row][col];
    }
    }
    
    cout<<"\nEnter 2nd matrix \n";
    for(row=0;row<m;row++){
     for(col=0;col<n;col++){
    cout<<"b ["<<row<<"]["<<col<<"] = ";
    cin>>b[row][col];
    }}	}
    cout<<"\n 1st matrix\n";
    for(row=0;row<i;row++){
    for(col=0;col<j;col++){
    cout<<a[row][col]<<"   ";
    }
    cout<<"\n";
	}
    cout<<"\n 2nd matrix\n";
    for(row=0;row<m;row++){
    for(col=0;col<n;col++){
    cout<<b[row][col]<<"   ";
    }
    cout<<"\n";
    }
	int k,n;
	cout<<"\n enter sacalr value ";
	cin>>k;
    cout<<"\npress -> 1-for 1st matrix multplication\npress -> 2-for 2nd matrix multplication ";
	cin>>n;
	if(n==1){
	cout<<"\n\nscalar multiplication of 1st matrix\n";
    for(row=0;row<i;row++){
    for(col=0;col<j;col++){
    cout<<a[row][col]*k<<"   ";
    }
    cout<<"\n";
    }	
	}
	if(n==2){
	cout<<"\n\nscalar multiplication of 2nd matrix\n";
    for(row=0;row<m;row++){
    for(col=0;col<n;col++){
    cout<<k*b[row][col]<<"   ";
    }
    cout<<"\n";
    }	
	}
   }
void matrix::Transpose(){
	int a[10][10], transpose[10][10], row, col;
	cout << "\nEnter 1st matrix order\nROW = ";
    cin>>row;
    cout << "COL = ";
    cin>>col;
	cout<<"\nEnter 1st matrix value\n";
    
    for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col; ++j) {
    cout << " a[" <<i<<"]["<<j<< "] =  ";
    cin >> a[i][j];
    }
    }
	
	cout<<"\n given matrix\n";
	for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col; ++j) {
    cout<<a[i][j]<<"   ";
    }
    cout<<"\n";
	}
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < col; ++j) {
         transpose[j][i] = a[i][j];
      }

   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < col; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }
}
int matrix::Determinant(){
	int a[3][3], i, j;
	float determinant = 0;	
	cout << "\nEnter  matrix order(3*3 or 2*2)\nROW = ";
    cin>>row;
    cout << "COL = ";
    cin>>col;
	{
	 cout<<"\nEnter  matrix value\n";
    for(i=0;i<row;i++){
     for(j=0;j<col;j++){
    cout<<"a ["<<i<<"]["<<j<<"] = ";
    cin>>a[i][j];
    }
    }
    cout<<"\n 1st matrix\n";
    for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    cout<<a[i][j]<<"   ";
    }
    cout<<"\n";
	}
	if((row==2)&&(col==2)){
		float result=0;
		result=(a[0][0]*a[1][1])-(a[1][0]*a[0][1]);
		cout<<"\nYour Determinent is: "<<result<<endl;
		return result;
	}
	else if((row==3)&&(col==3)){
		for(i = 0; i < 3; i++)
	determinant = determinant + (a[0][i] * (a[1][(i+1)%3] * a[2][(i+2)%3] - a[1][(i+2)%3] * a[2][(i+1)%3]));
	cout<<"\nYour Determinent is: "<<determinant;
	}
	else{
		cout<<"Matrix order should be of 3*3 or 2*2......"<<endl;
		return 0;
	}
}}
void matrix::Inverse(){
	int mat[3][3], i, j;
float determinant = 0;
cout<<"Enter elements of matrix row wise:\n";
for(i = 0; i < 3; i++)
for(j = 0; j < 3; j++)
     cin>>mat[i][j];
cout<<"\nGiven matrix is:";
for(i = 0; i < 3; i++){
cout<<"\n";
for(j = 0; j < 3; j++)
cout<<mat[i][j]<<"\t";
}
//finding determinant
for(i = 0; i < 3; i++)
determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
cout<<"\n\ndeterminant: "<<determinant;
cout<<"\n\nInverse of matrix is: \n";
for(i = 0; i < 3; i++){
for(j = 0; j < 3; j++)
cout<<((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant<<"\t";
cout<<"\n";
}
}



    void matrix::accept()
    {
        cout<<"Enter matrix order: ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(j==n)
                    cout<<"Constant no."<<i+1<<" = ";
                else
                    cout<<"a["<<i<<"]["<<j<<"] = ";
                cin>>mt[i][j];
            }
        }
    }
    void matrix::display()
    {
        for(int i=0;i<n;i++)
        {
            cout<<"\n";
            for(int j=0;j<n+1;j++)
            {
                if(j==n)
                    cout<<" ";
                cout<<mt[i][j]<<"\t";
            }
        }
    }

    void matrix::gauss()//converting augmented matrix to row echelon form
    {
        float temp;//Line 1
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                temp=mt[j][i]/mt[i][i];//Line 2
                for(int k=i;k<n+1;k++)
                {
                      mt[j][k]-=temp*mt[i][k];//Line 3
                    //a[j][k]-=a[j][i]*a[i][k]/a[i][i];//Line 4
                }
            }
        }
    }

	void matrix::EnterJordan()//converting to reduced row echelon form
    {
        float temp;
        for(int i=n-1;i>=0;i--)
        {

            for(int j=i-1;j>=0;j--)
            {
                temp=mt[j][i]/mt[i][i];
                for(int k=n;k>=i;k--)
                {
                    mt[j][k]-=temp*mt[i][k];
                }
            }
        }

        float x[n];
        for(int i=0;i<n;i++)//making leading coefficients zero
            x[i]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(x[i]==0&&j!=n)
                    x[i]=mt[i][j];
                if(x[i]!=0)
                    mt[i][j]/=x[i];
            }
        }
    }
    void matrix::credits()
    {
        for(int i=0;i<n;i++)
        {
            cout<<"\nx"<<i+1<<" = "<<mt[i][n]<<endl;
        }
    }
void matrix::identity(){
	int i, j, m, n, flag = 0, A[10][10];
    cout << "Enter number of rows and columns : ";
    cin >> m >> n;
    if (m != n)
    {
        cout << "Matrix is not a square matrix!";
        exit(0);
    }
    cout << "Enter elements of matrix : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)	
            cin >> A[i][j];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (i == j)
            {
                if (A[i][j] == 0)
                    flag = 1;
            }
            else
            {
                if (A[i][j] != 0)
                    flag = 1;
            }
    if (flag == 1)
        cout << "The given array is not a diagonal matrix.";
    else
    {
        cout << "The entered array is a diagonal matrix.\n ";	
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)	
                cout << A[i][j] << " ";
            cout << "\n ";
        }
    }
}
void matrix::symmtreic(){
	int A[10][10], i, j, m, n, x = 0, y = 0;
    cout << "Enter the number of rows and columns : ";
    cin >> m >> n;
    cout << "Enter the matrix elements : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    for (i = 0; i < m; i++)
    {
        for( j = 0; j < n; j++)
        {
            if (A[i][j] != A[j][i])
                x = 1;
            else if (A[i][j] == -A[j][i])
                    y = 1;
        }
    }
    if (x == 0)
        cout << "The matrix is symmetric.\n ";
    else if (y == 1)
        cout << "The matrix is skew symmetric.\n ";
    else
        cout << "It is neither symmetric nor skew-symmetric.\n ";
    for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)	
                cout << A[i][j] << " ";
            cout << "\n ";
        }
}		
int main()
{
	int choice;
	matrix mt;
	system("cls");
	a:
	cout<<"\n\t\t1-  for exit";
    cout<<"\n\t\t2-  for subtraction";
    cout<<"\n\t\t3-  for multiplication";
    cout<<"\n\t\t4-  for addition";
    cout<<"\n\t\t5-  for sacalr multplication";
    cout<<"\n\t\t6-  for transpose";
    cout<<"\n\t\t7-  for determinant";
    cout<<"\n\t\t8-  for inverse";
    cout<<"\n\t\t9-  for symmetric";
    cout<<"\n\t\t10- for identity";
    cout<<"\n\t\t11- for echelon and reduced echelon form";
    cout<<"\n\t\t12- for eigen value and eigen vector";
    
    cout<<"\n";
    cin>>choice ;
    system("cls");
    switch (choice){
    case 1:
    	exit(0);
    	getch();
    break;
    case 2:
    	mt.subtraction();
    	getch();
    break;
    case 3:
   		mt.multplication();
   		getch();
    break;
    case 4:
    	mt.addition();
    	getch();
    break;
    case 5:
    	mt.s_matrix();
    	getch();
    break;
     case 6:
    	mt.Transpose();
    	getch();
    break;
     case 7:
    	mt.Determinant();
    	getch();
    break;
     case 8:
    	mt.Inverse();
    	getch();
    break;
    case 9:
    	mt.symmtreic();
    	getch();
    break;
     case 10:
    	mt.identity();
    	getch();
    break;
     case 11:
    mt.accept();
    cout<<"\n\nmatrix: \n\n\n";
    mt.display();
    mt.gauss();
    cout<<"\n\nRow Echelon form: \n\n\n";
    mt.display();
    mt.EnterJordan();
    cout<<"\n\nReduced row echelon form:\n\n\n";
    mt.display();
    cout<<"\n\nSolution: \n\n\n";
    mt.credits();
    getch();
    break;
    case 12:
    	mt.eigen();
    	getch();
    break;
    default:
    cout <<"wrong choice";
    break;
    }
    goto a;
    return 0;
}
