#ifndef BIGINTERGER_BIGINTEGER_H
#define BIGINTERGER_BIGINTEGER_H

//Create class Big Interger
class BigInteger 
{
	private:
		vector<int> num;
	public:
		BigInt();
		BigInt(char *);
		void input();
		void output();
		BigInteger add(BigInteger);
		BigInteger sub(BigInteger);
		BigInteger mul(BigInteger);
		BigInteger div(BigInteger);
		bool isSmaller(BigInteger);
		bool isBigger(BigInteger);
		bool isEqual(BigInteger);
};

	