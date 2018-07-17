             
package com.ideserve.saurabh.questions;
 
/**
 * <b>IDeserve <br>
 * <a href="<a class="vglnk" href="https://www.youtube.com/c/IDeserve" rel="nofollow"><span>https</span><span>://</span><span>www</span><span>.</span><span>youtube</span><span>.</span><span>com</span><span>/</span><span>c</span><span>/</span><span>IDeserve</span></a>"><a class="vglnk" href="https://www.youtube.com/c/IDeserve" rel="nofollow"><span>https</span><span>://</span><span>www</span><span>.</span><span>youtube</span><span>.</span><span>com</span><span>/</span><span>c</span><span>/</span><span>IDeserve</span></a></a>
 * <br><br>
 * Peak Element</b><br>
 * Given an array of size n, find a peak element. Peak element is the element which is greater or equal to all its neighbors.<br><br>
 * <br><br>
 * Ex. Array [1,4,3,6,7,5]
 * <br>
 * Output: 4
 * <br><br>
 * <a href="<a class="vglnk" href="https://www.youtube.com/watch?v=zOyOwDEF1Rc" rel="nofollow"><span>https</span><span>://</span><span>www</span><span>.</span><span>youtube</span><span>.</span><span>com</span><span>/</span><span>watch</span><span>?</span><span>v</span><span>=</span><span>zOyOwDEF1Rc</span></a>">Peak Element - Youtube Link</a> 
 * @author Saurabh
 *
 */
public class PeakElement {
 
    public static Integer getPeakElement(int[] array) {
 
        if (array == null || array.length == 0) {
            return null;
        }
 
        int n = array.length;
 
        int start = 0;
        int end = n - 1;
 
        while (start <= end) {
            int mid = (start + end) / 2;
 
            if ((mid == 0 || array[mid - 1] <= array[mid]) && (mid == n - 1 || array[mid] >= array[mid + 1])) {
                return array[mid]; // array[mid] is peak element
            } else if (mid > 0 && array[mid - 1] > array[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return null;
    }
 
    public static void main(String[] args) {
        int[] array = { 15, 20, 25, 35, 45, 50, 60 };
        Integer peak = getPeakElement(array);
        System.out.println(peak != null ? "Peak Element is " + peak : "No peak element!");
    }
}
        