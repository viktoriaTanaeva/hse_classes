public class Lab3 { 
//string - количество строк, column - количество столбцов, module - ограничение на размер модуля целых чисел, 
//type - тип сортировки ("ascending" - по возрастанию, "descending" - по убыванию)
//pushCount - количество вставок в стек, popCount - количество удалений в стеке, length - длина перестановки
	public static void main (String[]args) {
		int[][]array= {{-10, 1, 2, 0, 5, 9, 10, -1}, {10, 9, 3, 8, 1, 3, -10, -4}, {189, -135, 48, 0, 23, -135, 189, 3}};
		System.out.println("Двумерный целочисленный массив:");
		printArray(array);
		System.out.println();
		System.out.println("Минимум в двумерном целочисленном массиве:");
		System.out.println("min="+findMin(array)+";  ");
		System.out.println();
		System.out.println("Максимум в двумерном целочисленном массиве:");
		System.out.println("max="+findMax(array)+";  ");
		System.out.println();
		findIndexMin(array);
		System.out.println();
		findIndexMax(array);
		System.out.println();
		
		int string; int column; String type; int module; int pushCount; int popCount; int length;
		if (args.length!=2) {
			System.out.println ("Неверные значения. Будут использованы параметры по умолчанию");
			string=5;
			column=5;
			module=200;
			type="ascending";
			pushCount=5;
			popCount=0;
			length=10;
	    }
	    else {
	    	string=Integer.parseInt(args[0]);
			column=Integer.parseInt(args[1]);
			module=Integer.parseInt(args[2]);
			type=args[3];
			pushCount=Integer.parseInt(args[4]);
			popCount=Integer.parseInt(args[5]);
			length=Integer.parseInt(args[6]);
	    }
		
		int [][]a=new int[string][column];
		System.out.println("Исходный массив:");
		randomArray(a, module);
		printArray(a);
		System.out.println("Модифицированный массив:");
		long startTime=System.nanoTime();
		boolean sort;
		if (type=="ascending") //true - по возрастанию, false - по убыванию
			sort=true;
		else sort=false;
		sortArray(a, sort); 
		long sortArrayTime=(System.nanoTime()-startTime)/1000;
		printArray(a);
		System.out.println("Время выполнения сортировки: "+sortArrayTime+" наносек");
		System.out.println("");
		
		Stack mStack=new Stack();
	    mStack.addElement(90);
	    mStack.addElement(43);
	    mStack.addElement(22);
	    mStack.addElement(7);
	    mStack.deleteElement();
	    System.out.print("Стек: ");
	    while (!mStack.isEmpty()) {
	    	int value=mStack.deleteElement();
	        System.out.print(value);
	        System.out.print(" ");
	   }
	    System.out.println(); System.out.println();
	    stackRandomOperations(pushCount, popCount);
	    System.out.println("");
	    System.out.println("Перестановки");
	    permutations();
	    System.out.println();
	    System.out.println("Перестановка с рандомной длиной");
	    randomPermutationsLength(length);
	}
	
	public static int findMin (int[][]a) {
		int min=a[0][0];
		for (int i=0; i<a.length; i++) {
			for (int j=0; j<a[0].length; j++) {
				if (min>a[i][j])
					min=a[i][j];
			}
		}
		return min;
	}
	 public static int findMax (int[][]a) {
		 int max=a[0][0];
		 for (int i=0; i<a.length; i++) {
			 for (int j=0; j<a[0].length; j++) {
				 if (max<a[i][j])
					 max=a[i][j];
			 }
		 }
		 return max;
	}
	public static void findIndexMin (int[][]a) {
		int min=findMin(a);
		System.out.println("Индекс минимума");
		for (int i=0; i<a.length; i++) {
			for (int j=0; j<a[0].length; j++) {
				if(min==a[i][j])
					System.out.println("Строка: ["+i+"] Элемент: ["+j+"];");
			}
		}
	}
	public static void findIndexMax (int[][]a) {
		int min=findMax(a);
		System.out.println("Индекс максимума");
		for (int i=0; i<a.length; i++) {
			 for (int j=0; j<a[0].length; j++) {
			if(min==a[i][j])
				System.out.println("Строка: ["+i+"] Элемент: ["+j+"];");
			 }
		}
	}
	public static void sortArray (int[][] array, boolean isAscending) {
        if (isAscending) {
            for (int i=0; i<array[i].length-1; i++)
                for (int j=0; j<array.length; j++)
                if (array[i][j]>array[i+1][j]) {
	               	int temp=array[i][j];
	                array[i][j]=array[i+1][j];
	                array[i+1][j]=temp;
	                i=0;
	                j=-1;
	           }
        }
        else {
            for (int i=0; i<array[i].length-1; i++)
                for (int j=0; j<array.length; j++)
                if (array[i][j]<array[i+1][j]) {
                	int temp=array[i][j];
                    array[i][j]=array[i+1][j];
                    array[i+1][j]=temp;
                    i=0;
                    j=-1;
                }
       }
    }
	public static void randomArray (int[][]a, int module){
		for (int i=0; i<a.length; i++) {
			for (int j=0; j<a.length; j++) {
					a[i][j]=a[0][0];
					a[i][j]=getRandomValue((module)+module-1);
			}
		}
	}
	public static void printArray (int[][]a) {
		for (int i=0; i<a.length; i++) {
	            for (int j=0; j<a[0].length; j++) {
	                System.out.print(" "+a[i][j]+" ");
	            }
	            System.out.println();
	   }
	}
	public static int getRandomValue(int module) { //random
		java.util.Random r=new
		java.util.Random();
		int returnValue=r.nextInt(module+1)-module/2;		
		return returnValue;
	}
	public static void stackRandomOperations (int pushCount, int popCount) {
		int stackCount=getRandomValueForStackCount();
		System.out.println("Количество стеков: "+stackCount);
		for (int j=0; j<stackCount; j++) {
			int operations[]=new int[pushCount+popCount];
			Stack stack=new Stack();
			System.out.println("Новый стек пуст");
			while (!stack.isEmpty()) {
		    	int value=stack.deleteElement();
		        System.out.print(value);
		        System.out.print(" ");
			}
			for (int i=0; i<pushCount; i++) 
				operations[i]=1;
			for (int i=pushCount; i<popCount; i++)
				operations[i]=0;
			for (int i=0; i<operations.length; i++) {
				if (operations[i]==1) {
					System.out.println("Вставка нового элемента");
					 stack.addElement(getRandomValue(10));
				}
				else {
					System.out.println("Извлечение последнего элемента");
					stack.deleteElement();
				}		
			}
			System.out.println("Изменённый стек:");
			while (!stack.isEmpty()) {
		    	int value=stack.deleteElement();
		        System.out.print(value);
		        System.out.print(" ");
		   }
		   System.out.println();
		}
	}
	public static int getRandomValueForStackCount() { //random
		return new java.util.Random().nextInt(10);
	}
	public static void printArray (int[]array) {
		if (array.length<25)
			for (int a:array)
				System.out.print(a+"; ");
		else {
			for (int i=0; i<10; i++)
				System.out.print(array[i]+"; ");
			System.out.print("...");
			for (int i=array.length-10; i<array.length; i++)
				System.out.print(array[i]+"; ");
		}
		System.out.println();
	}
	public static void duplicateArray(int[]from, int[]to)  {
        for (int i=0; i<from.length; i++)
            to[i]=from[i];
    }
	public static void permutations() {
		int[]a= {1, 2, 3, 4, 5};
		int[]b= {2, 3, 4, 5, 1};
		printArray(a);
		printArray(b);
		cycle(a, b);
		System.out.println();
		int[]c= {8, 2, 10, 5, 1, 7};
		int[]d= {1, 2, 5, 7, 8, 10};
		printArray(c);
		printArray(d);
		cycle(c, d);
	}
	public static void randomPermutationsLength (int length) {
		int[]arrayA=new int[length];
		for (int i=0; i<length;) arrayA[i]=++i;
		int[]arrayB=new int[length];
		duplicateArray(arrayA, arrayB);
		reshuffle(arrayB);
		printArray(arrayA);
		printArray(arrayB);
		cycle(arrayA, arrayB);
		
	}
	public static void reshuffle (int[]array) {
		for (int i=0; i<array.length; i++) {
			int temp=array[i];
			int module=getRandomValueForStackCount();
			array[i]=array[module];
			array[module]=temp;
		}
	}
	public static void cycle(int[]arrayOne, int[]arrayTwo) {
		int a;
		int b=-2;
		int c;
		int counter=0;
		int[] newArray=new int[arrayOne.length];
		duplicateArray(arrayOne, newArray);
		for(int i=0; i<newArray.length; i++) {
			for(int j=0; j<newArray.length; j++) {
				if((newArray[i]==arrayTwo[j])&&(newArray[j]==arrayTwo[i])) {
						counter=counter+1;
						System.out.print("["+newArray[i]+"-"+newArray[j]+"] "); //вид при печати должен быть похож на [1-2-3-4-5]
						newArray[i]=-1;
						newArray[j]=-1;
				}	
			}	
		}
		for(int i=0; i<newArray.length; i++) {
			if(newArray[i]!=-1) {
				System.out.print("["+newArray[i]);
				a=newArray[i]; 
				b=arrayTwo[i]; 
				c=arrayTwo[i]; 
				while(b!=a) {
					newArray[i]=-1;
					for(int j=0; j<newArray.length; j++) {
						if(newArray[j]==c) {
							c=arrayTwo[j];
							System.out.print("-"+newArray[j]);
							newArray[j]=-1;
						}
					}
					b=c;		
				}
			    counter=counter+1;
			    System.out.print("] ");
			}
		}
		System.out.println();
		System.out.println("Количество циклов: "+counter);
		}
	
}
