// C++ code for the above approach

#include <algorithm>
#include <iostream>
using namespace std;

// A structure to represent a job
struct Job
{

    char id;    // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is over before or on
};
bool comparison(Job a, Job b)
{
    return (a.profit > b.profit);
}
void printJobScheduling(Job arr[], int n)
{

    sort(arr, arr + n, comparison);

    int result[n];
    bool slot[n];
    for (int i = 0; i < n; i++)
        slot[i] = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, arr[i].dead) - 1; j >= 0; j--)
        {
            // Free slot found
            if (slot[j] == false)
            {
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
        if (slot[i])
            cout << arr[result[i]].id << " ";
}

// Driver's code
int main()
{
    Job arr[] = {{'a', 2, 100},
                 {'b', 1, 19},
                 {'c', 2, 27},
                 {'d', 1, 25},
                 {'e', 3, 15}};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs "
            "\n";
    printJobScheduling(arr, n);
    return 0;
}

/*

Given an array of jobs where every job has a deadline and associated profit if the job is finished before the deadline. It is also given that every job takes a single unit of time, so the minimum possible deadline for any job is 1. Maximize the total profit if only one job can be scheduled at a time.

Examples: 

Input: Four Jobs with following deadlines and profits

JobID  Deadline  Profit


  a           4          20   
  b           1          10
  c           1          40  
  d          1          30

Output: Following is maximum profit sequence of jobs: c, a   

Input:  Five Jobs with following deadlines and profits

JobID   Deadline  Profit

  a            2          100
  b            1          19
  c            2          27
 d            1          25
 e            3          15

Output: Following is maximum profit sequence of jobs: c, a, e

Recommended Practice
Job Sequencing Problem
Try It!
Naive Approach: To solve the problem follow the below idea:

Generate all subsets of a given set of jobs and check individual subsets for the feasibility of jobs in that subset. Keep track of maximum profit among all feasible subsets.

Greedy approach for job sequencing problem:
Greedily choose the jobs with maximum profit first, by sorting the jobs in decreasing order of their profit. This would help to maximize the total profit as choosing the job with maximum profit for every time slot will eventually maximize the total profit

Follow the given steps to solve the problem:

Sort all jobs in decreasing order of profit. 
Iterate on jobs in decreasing order of profit.For each job , do the following : 
Find a time slot i, such that slot is empty and i < deadline and i is greatest.Put the job in 
this slot and mark this slot filled. 
If no such i exists, then ignore the job. 
*/
