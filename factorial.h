/* 팩토리얼은 수학에서 수열 6! = 6*5*4*3*2*1 */
#define ONE 1
int factorial(int n) {
	if(n>one) {		
		return(n*facorial(n-1));//재귀호출 반환값이 6*, 5*, 4*, 3*, 2*, 1 
	}else{
		//n-1 반복되다가 n이 1이 되었을 경우 1을 반환, 재귀함수의 끝
		return(one);
	}
}