class Frequency {
    public static void main(String[] args) {
        int[] array = {1, 2, 1, 10, 2, 5};
        int[] uniq = new int[array.length];
        int count = 0;
        for(int i = 0; i < array.length; i++) {
            if(!checkIfExists(array, i)) {
                uniq[count] = array[i];
                count++;
            }
        }
        int[] countArray = new int[count];
        for(int i = 0; i < array.length; i++) {
            countArray[getIndex(uniq, array[i])] += 1;
        }
        for(int i = 0; i < countArray.length; i++) {
            System.out.println(uniq[i]+" => "+countArray[i]+",");
        }
        
    }
    private static int getIndex(int[] array, int key) {
        for(int i = 0; i < array.length; i++) {
            if(array[i] == key) {
                return i;
            }
        }
        return -1;
        
    }
    private static boolean checkIfExists(int[] array, int from) {
        int key = array[from];
        for(int i = from+1; i < array.length; i++) {
            if(array[i] == key) {
                return true;
            }
        }
        return false;
    }
}
