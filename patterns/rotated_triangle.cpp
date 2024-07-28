void nStarTriangle(int n) {
    for(int i=1; i<=2*n-1; i++) {
        if(i>n){
            for(int j = 2*n -i; j>0;j--) {
                cout << "*";
            }
        } else {
            for(int j = 0; j<i; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }
}