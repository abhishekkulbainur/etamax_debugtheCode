public class MatrixAddition {
	public static void main(string[] args) { //Expected uppercase 's' in string under main()
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter number of rows: ");
	int rows = sc.nextInt();
	System.out.print("Enter number of columns: ");
	int cols = sc.nextInt();
	int[][] matrix1 = new int[rows][cols];
	int[][] matrix2 = new int[rows][cols];
	int[][] sum = new int[rows][cols];
	System.out.println("Enter elements for the first matrix:");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix1[i][j] = sc.nextInt();
			}
		}
	System.out.println("Enter elements for the second matrix:");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix2[i][j] = sc.nextlnt(); //(it is lowercase L instead of uppercase I in 'nextlnt')
			}
		}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum[i][i] = matrix1[i][j] + matrix2[i][j]; //sum[i][i] should be sum[i][j]
			}
		}
	System.out.println("\nSum of the matrices:");
	for (int i = 0 : i < rows ; i++) {
		for (int j = 0 ; j < cols; j++) {
			System.out.print(sum[j][j] + " "); //should be sum[i][j] instead of sum[j][j]
			}
		System.out.println();
		}
	sc.close();
	}
}