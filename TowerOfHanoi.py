# Python function to solve tower of hanoi using recursion
 
def TowerOfHanoi(n, from_rod, to_rod, aux_rod):
    if n == 0:
        return
    
    TowerOfHanoi(n-1, from_rod, aux_rod, to_rod)
    print("Move disk", n, "from rod", from_rod, "to rod", to_rod)
    TowerOfHanoi(n-1, aux_rod, to_rod, from_rod)
 
 
# Driver code
N = 2
 
# A, C, B are the name of rods and N is number of disks
TowerOfHanoi(N, 'A', 'C', 'B')