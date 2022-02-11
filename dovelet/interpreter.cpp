#include <iostream>
#include <string>

using namespace std;

int cnt = 0;
int header = 0;
int reg[10] = {0};
string ram[1000];

void run(string cmd) {
    int c, m, d;
    c = cmd[0] - '0';
    m = cmd[1] - '0';
    d = cmd[2] - '0';

    if (c == 2) {
        reg[m] = d;
    } else if (c == 3) {
        reg[m] = (reg[m] + d) % 1000;
    } else if (c == 4) {
        reg[m] = (reg[m] * d) % 1000;
    } else if (c == 5) {
        reg[m] = reg[d];
    } else if (c == 6) {
        reg[m] = (reg[m] + reg[d]) % 1000;
    } else if (c == 7) {
        reg[m] = (reg[m] * reg[d]) % 1000;
    } else if (c == 8) {
        reg[m] = stoi(ram[reg[d]]);
    } else if (c == 9) {
        string new_cmd = to_string(reg[m]);
        for (int i = new_cmd.size(); i < 3; i++) {
            new_cmd = "0" + new_cmd;
        }
        ram[reg[d]] = new_cmd;
    } else if (c == 0) {
        if (reg[d] != 0) {
            header = reg[m];
        }
    }
    cnt++;
}

int main(void) {    
    for (int i = 0; i < 1000; i++) {
        cin >> ram[i];
    }

    string cmd = ram[header];
    while (cmd != "100") {
        run(cmd);
        cmd = ram[header];
        header++;
    }

    cout << cnt << '\n';

    return 0;
}
