class Matrix {
    private int row, col;
    private int[][] matrices;
    public Matrix(int row, int col) {
        this.row = row;
        this.col = col;
        matrices = new int[row][col];
    }
    public static void main(String[] args) {
        int[][] a = new int[][] {
            {2, 5, 1},
            {4, 3, 2},
            {4, 7, 5}
        };
        int[][] b = new int[][] {
            {5, 2, 3},
            {7, 5, 8},
            {9, 6, 3}
        };
        Matrix matrixA = new Matrix(3, 3);
        Matrix matrixB = new Matrix(3, 3);
        matrixA.set(a);
        matrixB.set(b);
        System.out.print(matrixA.multiply(matrixB));
    }
    
    @Override
    public String toString() {
        String msg = "";
        for(int[] i : matrices) {
            msg += "[ ";
            for(int j : i) {
                msg += (j+" ");
            };
            msg += "]\n";
        }
        return msg;
    }

    public void set(int[][] matrices) {
        this.matrices = matrices;
    }
    public int getRow() {
        return row;
    }
    public int getCol() {
        return col;
    }
    public void setElement(int row, int col, int element) {
        matrices[row][col] = element;
    }
    public Matrix add(Matrix m2) {
        if(row != m2.row || col != m2.col)  {
            return null;
        }
        Matrix sum = new Matrix(row, col);
        for(int i = 0; i < row; i++) {
            for(int j = col; j < col; j++) {
                sum.setElement(i, j, matrices[i][j]+m2.matrices[i][j]);
            }
        }
        return sum;
    }
    public Matrix multiply(Matrix m2) {
        if(col != m2.row) {
            return null;
        }
        Matrix mul = new Matrix(row, m2.col);
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < m2.col; j++) {
                int sum = 0;
                for(int k = 0; k < m2.col; k++) {
                    sum += (matrices[i][k] * m2.matrices[k][j]);
                }
                mul.setElement(i, j, sum);
            }
        }
        return mul;
    }
}