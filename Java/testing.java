import java.util.ArrayList;
import java.util.Arrays;

public class testing {
    public static void main(String[] args) {
        int n = 12345;
        System.out.println(n);
        // double digit = Math.log10(n) + 1;
        // System.out.println(digit);

        String a = "abcde";
        System.out.println(a);
        System.out.println(a.charAt(2));

        ArrayList<Integer> list = new ArrayList<Integer>();
        list.add(1);
        list.add(2);
        list.add(3);
        System.out.println(list);
        ArrayList<Integer> list2 = new ArrayList<Integer>();
        // int arr[]={1,2,3,4,5,6,7,8,9};
        // list2.addAll(Arrays.copyOfRange(arr,0,9));
        System.out.println(list2);
    }
}