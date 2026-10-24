class Solution {
public:
    int countDaysTogether(string a, string b, string c, string d) {
        int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

        int x = 0, y = 0, z = 0, w = 0;

        for(int i = 0; i < stoi(a.substr(0,2))-1; i++)
            x += days[i];
        x += stoi(a.substr(3,2));

        for(int i = 0; i < stoi(b.substr(0,2))-1; i++)
            y += days[i];
        y += stoi(b.substr(3,2));

        for(int i = 0; i < stoi(c.substr(0,2))-1; i++)
            z += days[i];
        z += stoi(c.substr(3,2));

        for(int i = 0; i < stoi(d.substr(0,2))-1; i++)
            w += days[i];
        w += stoi(d.substr(3,2));

        return max(0, min(y,w) - max(x,z) + 1);
    }
};