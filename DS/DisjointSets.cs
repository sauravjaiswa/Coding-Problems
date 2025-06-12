/*Complete the function below*/
class GfG {
    int find(int par[], int x) {
        // add code here.
        if(par[x] == x){
            return par[x];
        }
        
        return find(par, par[x]);
    }

    void unionSet(int par[], int x, int z) {
        // add code here.
        int xRep = find(par, x);
        int zRep = find(par, z);
        
        par[xRep] = zRep;
    }
}