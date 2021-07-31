class Gfg
{
    public static void main (String[] args) {
        
        //taking input using class Scanner
        Scanner sc = new Scanner(System.in);
        
        //taking count of testcases
        int testcases = sc.nextInt();
        while(testcases-- > 0)
        {
            //taking size of array
            int N = sc.nextInt();
            int arr[] =  new int[N];  //array declaration
            
            for(int i = 0; i < N; i++)
             arr[i] = sc.nextInt(); //Input the array
             
             
            int sum = 0; 
            
            //taking sum
            sum = sc.nextInt();
            
            //Creating an object of class Geeks
            Geeks obj = new Geeks();
            
            //Calling sumExists method of class Geeks 
            //and printing the result
            System.out.println(obj.sumExists(arr, N, sum));
        }
    }
}
