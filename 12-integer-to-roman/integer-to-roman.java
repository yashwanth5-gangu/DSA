class Solution {
    public String intToRoman(int num) {
        List<Integer> li=Arrays.asList(1000,900,500,400,100,90,50,40,10,9,5,4,1);
        List<String> str=Arrays.asList("M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I");
        StringBuilder ans= new StringBuilder();
        for(int i=0;i<13;i++){
            while(num>=li.get(i)){
                ans.append(str.get(i));
                num=num-li.get(i);
            }
        }
        return ans.toString();
    }
}