public class Stack {
    int[] stackArray;
    int top;
    public Stack() {
    	top=-1;
        stackArray=new int[1];
    }
    public void addElement(int value) {
        int[]temp=new int[stackArray.length + 1];
        for (int i=0; i<stackArray.length; i++) {
        	temp[i]=stackArray[i];
        }
        stackArray=temp;
        stackArray[++top]=value;
    }
    public int deleteElement() {
        return stackArray[top--];
    }
    public int returnTop() {
        return stackArray[top];
    }
    public boolean isEmpty() {
        return (top==-1);
    }
    public boolean isFull() {
        return (top==stackArray.length-1);
    }
}
