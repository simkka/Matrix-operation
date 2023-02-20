<h1>Programming Project - C</h1>
<h2>Matrix operation</h2>
Find the programme code in the files.
<h2>Description</h2>


There is a real square matrix A of order M. Find a real square matrix B of order N.
matrix B of order N, each of its elements is equal to the sum of the elements of matrix A in the corresponding shaded region defined by the indices i, j:<br />


<img width="281" alt="Снимок экрана 2023-02-20 в 22 04 10" src="https://user-images.githubusercontent.com/87941256/220204972-203fab73-9dcf-4abc-bed9-e2dc9bc3e8c4.png"><br />
Here are two algorithms for solving this problem.<br />
<br />

<h2>Algorithm Description №2</h2>
1) Enter the size of the array N;<br />
2) Assign i=0, j=0;<br />
3) Assign to the last element of array B[N-1][N-1] the value<br />
of the last element of array A[N-1][N-1];
4) Calculate the elements of the last line of array B from the end by adding to
the value of the corresponding element of the previous calculated element B
of array A;
5) Similarly, fill the last column of array B;
6) Fill in the remaining elements by adding to the corresponding element A
the value of element B, which is one below, and the value of element B, which is one to the right, and subtract the value of element B, which is one below and to the right (B[i][j]=B[i+1][j]+B[i][j+1]-B[i+1][j+1]+A[i][j]);
7) Print the array B.
<br />

 
<h2>Algorithm action diagram 2:</h2>
<img width="387" alt="Снимок экрана 2023-02-20 в 22 35 55" src="https://user-images.githubusercontent.com/87941256/220208023-0002953b-5031-44b3-9980-488184afbe9c.png">

<h2>Examples of program output</h2>
<img width="725" alt="Снимок экрана 2023-02-20 в 22 41 35" src="https://user-images.githubusercontent.com/87941256/220208525-e1428075-c721-40ed-a895-3b337cd7fa53.png">
<img width="658" alt="Снимок экрана 2023-02-20 в 22 41 45" src="https://user-images.githubusercontent.com/87941256/220208537-56427d97-eda9-40a6-a18b-5d70e1f6baa2.png">
