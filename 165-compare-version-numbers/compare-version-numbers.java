class Solution {
    public int compareVersion(String version1, String version2) {
    String[] arr=version1.split("\\.");
    String[] arr1=version2.split("\\.");
    int arr2[]=new int[arr.length];
    for(int i=0;i<arr.length;i++){
        arr2[i]=Integer.parseInt(arr[i]);
    }
    int arr3[]=new int[arr1.length];
    for(int i=0;i<arr1.length;i++){
        arr3[i]=Integer.parseInt(arr1[i]);
    }
    int i=0;
    while(i<arr2.length || i<arr3.length){
        int a=(i<arr2.length)? arr2[i]:0;
        int b=(i<arr3.length)?arr3[i]:0;
        if(a<b)return -1;
        if(a>b)return 1;
    
           i++;
   
    }
    return 0;
    }
}