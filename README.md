# Implementation-of-Insertion-Sort-Algorithm-on-CUDA-and-comparing-with-CPU-implementation-
Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list. It is a stable sorting algorithm, meaning that elements with equal values maintain their relative order in the sorted output.

Algorithm:

To achieve insertion sort, follow these steps:

•	We have to start with second element of the array as first element in the array is assumed to be sorted.

•	Compare second element with the first element and check if the second element is smaller then swap them.

•	Move to the third element and compare it with the second element, then the first element and swap as necessary to put it in the correct position among the first three elements.

•	Continue this process, comparing each element with the ones before it and swapping as needed to place it in the correct position among the sorted elements.

•	Repeat until the entire array is sorted.

**************************************************************************************

This Algorithm has been implemented on both CPU and GPU using the Google Colab Platform 

For  the CPU implementation the Code was writen in C 

For the GPU implementation the Code was writen in CUDA 

**************************************************************************************

Typical CUDA Program flow:

•	Load data into CPU memory

•	Copy data from CPU to GPU memory – e.g., cudaMemcpy(…, cudaMemcpyHostToDevice)

•	Call GPU kernel using device variable – e.g., kernel<<<>>> (gpuVar)

•	Copy results from GPU to CPU memory – e.g., cudaMemcpy(.., cudaMemcpyDeviceToHost)

•	Use results on CPU



