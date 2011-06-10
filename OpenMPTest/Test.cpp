// cpp_compiler_options_openmp.cpp
/*#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

volatile DWORD dwStart;
volatile int global = 0;

double test2(int num_steps)
{
   int i;
   global++;
   double x, pi, sum = 0.0, step;

   step = 1.0 / (double) num_steps;

   #pragma omp parallel for reduction(+:sum) private(x)
   for (i = 1; i <= num_steps; i++) {
      x = (i - 0.5) * step;
      sum = sum + 4.0 / (1.0 + x*x);
   }

   pi = step * sum;
   return pi;
}

int main(int argc, char* argv[])
{
   double   d;
   int n = 100000000;

   int a = omp_get_dynamic();
   omp_set_dynamic(6);

   if (argc > 1)
      n = atoi(argv[1]);

   dwStart = GetTickCount();
   d = test2(n);
   printf_s("For %d steps, pi = %.15f, %d milliseconds\n", n, d, GetTickCount() - dwStart);

   dwStart = GetTickCount();
   d = test2(n);
   printf_s("For %d steps, pi = %.15f, %d milliseconds\n", n, d, GetTickCount() - dwStart);
}


*/
//#include <omp.h>
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
#include <windows.h>
#include <math.h>

class Task
{
public:
	virtual void update(void) = 0;
};

const int iters = 9999999;
class Task1 : public Task
{
public:
	void update()
	{
			for(int i = 0; i <iters; i ++)
			{
				double appel = sqrt(5664.95599);
				double frik = sqrt(554454.997679);
				double piesang = sqrt(5545554.994549);
				double appel4 = sqrt(5556554.96899);
				double frik3 = sqrt(544554.96699);
				double piesang2 = sqrt(555498.9099);
				double appel5 = sqrt(555478.999);
				double frik78 = sqrt(5554557.999);
				double piesang8787 = sqrt(555334.999);
				double appel44 = sqrt(556554.999);
				double frik2312 = sqrt(5552434.999);
				double piesang45 = sqrt(551154.999);
				double appel656 = sqrt(553354.999);
				double frik76 = sqrt(5523454.999);
				double piesang222= sqrt(55354.999);
			}
//			printf_s("Task1 %d\n", omp_get_thread_num());
	}
};

class Task2 : public Task
{
public:
	void update()
	{
			for(int i = 0; i <iters; i ++)
			{
				double appel = sqrt(5664.95599);
				double frik = sqrt(554454.997679);
				double piesang = sqrt(5545554.994549);
				double appel4 = sqrt(5556554.96899);
				double frik3 = sqrt(544554.96699);
				double piesang2 = sqrt(555498.9099);
				double appel5 = sqrt(555478.999);
				double frik78 = sqrt(5554557.999);
				double piesang8787 = sqrt(555334.999);
				double appel44 = sqrt(556554.999);
				double frik2312 = sqrt(5552434.999);
				double piesang45 = sqrt(551154.999);
				double appel656 = sqrt(553354.999);
				double frik76 = sqrt(5523454.999);
				double piesang222= sqrt(55354.999);
			}
		//	printf_s("Task2 %d\n", omp_get_thread_num());
	}
};

class Task3 : public Task
{
public:
	void update()
	{
			for(int i = 0; i <iters; i ++)
			{
		double appel = sqrt(5664.95599);
				double frik = sqrt(554454.997679);
				double piesang = sqrt(5545554.994549);
				double appel4 = sqrt(5556554.96899);
				double frik3 = sqrt(544554.96699);
				double piesang2 = sqrt(555498.9099);
				double appel5 = sqrt(555478.999);
				double frik78 = sqrt(5554557.999);
				double piesang8787 = sqrt(555334.999);
				double appel44 = sqrt(556554.999);
				double frik2312 = sqrt(5552434.999);
				double piesang45 = sqrt(551154.999);
				double appel656 = sqrt(553354.999);
				double frik76 = sqrt(5523454.999);
				double piesang222= sqrt(55354.999);
			}
		//	printf_s("Task3 %d\n", omp_get_thread_num());
	}
};
class Task4 : public Task
{
public:
	void update()
	{
			for(int i = 0; i <iters; i ++)
			{
				double appel = sqrt(5664.95599);
				double frik = sqrt(554454.997679);
				double piesang = sqrt(5545554.994549);
				double appel4 = sqrt(5556554.96899);
				double frik3 = sqrt(544554.96699);
				double piesang2 = sqrt(555498.9099);
				double appel5 = sqrt(555478.999);
				double frik78 = sqrt(5554557.999);
				double piesang8787 = sqrt(555334.999);
				double appel44 = sqrt(556554.999);
				double frik2312 = sqrt(5552434.999);
				double piesang45 = sqrt(551154.999);
				double appel656 = sqrt(553354.999);
				double frik76 = sqrt(5523454.999);
				double piesang222= sqrt(55354.999);
			}
	//		printf_s("Task4 %d\n", omp_get_thread_num());
	}
};
class Task5 : public Task
{
public:
	void update()
	{
			for(int i = 0; i <iters; i ++)
			{
				double appel = sqrt(5664.95599);
				double frik = sqrt(554454.997679);
				double piesang = sqrt(5545554.994549);
				double appel4 = sqrt(5556554.96899);
				double frik3 = sqrt(544554.96699);
				double piesang2 = sqrt(555498.9099);
				double appel5 = sqrt(555478.999);
				double frik78 = sqrt(5554557.999);
				double piesang8787 = sqrt(555334.999);
				double appel44 = sqrt(556554.999);
				double frik2312 = sqrt(5552434.999);
				double piesang45 = sqrt(551154.999);
				double appel656 = sqrt(553354.999);
				double frik76 = sqrt(5523454.999);
				double piesang222= sqrt(55354.999);
			}
	//		printf_s("Task5 %d\n", omp_get_thread_num());
	}
};
int main()
{
    #omp
	//omp_set_num_threads(15);
//	omp_set_dynamic(15);
	vector<Task*> tasks;
	tasks.push_back(new Task1);
	tasks.push_back(new Task2);
	tasks.push_back(new Task3);
	tasks.push_back(new Task4);
	tasks.push_back(new Task5);
	tasks.push_back(new Task1);
	tasks.push_back(new Task2);
	tasks.push_back(new Task3);
	tasks.push_back(new Task4);
	tasks.push_back(new Task5);
//	double start1 = omp_get_wtime();
#pragma omp parallel sections
	{
#pragma omp section
		{
			tasks[0]->update();
		}
#pragma omp section
		{
			tasks[1]->update();
		}
#pragma omp section
		{
			tasks[2]->update();
		}
#pragma omp section
		{
			tasks[3]->update();
		}
#pragma omp section
		{
			tasks[4]->update();
		}
	}

	#pragma omp parallel for schedule(guided)
	for(int i = 0; i < tasks.size(); i++)
		tasks[i]->update();

//	double end1 = omp_get_wtime();
	//printf_s("\n\n%f", end1-start1);
/*	int   i, n, chunk;
float a[100], b[100], result;

n = 100;
chunk = 10;
result = 0.0;
for (i=0; i < n; i++)
  {
  a[i] = i * 1.0;
  b[i] = i * 2.0;
  }

#pragma omp parallel for default(shared) private(i) schedule(static,chunk) reduction(+:result)

  for (i=0; i < n; i++)
    result = result + (a[i] * b[i]);

printf("Final result= %f\n",result);*/

	#pragma omp parallel
{
    printf("Hello World\n");
}
return 0;
}
