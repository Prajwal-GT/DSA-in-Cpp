class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();

        auto nextIndex = [&](int i) {
            return ((i + nums[i]) % n + n) % n;
        };

        for (int start = 0; start < n; ++start) {
            if (nums[start] == 0) continue;

            bool forward = nums[start] > 0;
            int slow = start, fast = start;

            while (true) {
                int nextSlow = nextIndex(slow);
                if (nums[nextSlow] == 0 ||
                    (nums[nextSlow] > 0) != forward ||
                    nextSlow == slow) {
                    break;
                }

                int nextFast = nextIndex(fast);
                if (nums[nextFast] == 0 ||
                    (nums[nextFast] > 0) != forward ||
                    nextFast == fast) {
                    break;
                }

                int nextFast2 = nextIndex(nextFast);
                if (nums[nextFast2] == 0 ||
                    (nums[nextFast2] > 0) != forward ||
                    nextFast2 == nextFast) {
                    break;
                }

                slow = nextSlow;
                fast = nextFast2;

                if (slow == fast) return true;
            }
            int i = start;
            while (nums[i] != 0 && (nums[i] > 0) == forward) {
                int next = nextIndex(i);
                nums[i] = 0;
                i = next;
            }
        }

        return false;
    }
};