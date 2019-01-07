class Solution {
public:
    int minSteps(int n) {
        int co = 0;
		int now_ch = 1;
		int copy_num = 0;
		while (now_ch != n)
		{
			if ((n - now_ch) % now_ch == 0) { copy_num = now_ch; co++; }
			now_ch += copy_num;
			co++;
		}
		return co;
    }
};
