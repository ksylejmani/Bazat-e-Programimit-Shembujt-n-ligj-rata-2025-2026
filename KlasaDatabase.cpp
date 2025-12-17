#include<iostream>
#include<string>
using namespace std;
class Database{
    private:
        string hostname;
        int port;
    public:
        string tableName;
        string dbType;
        Database(){
            hostname="";
            port=-1;
            tableName="";
            dbType="";
        }
        void setHostName(string hostname){
            this->hostname=hostname;
        }
        string getHostName(){
            return this->hostname;
        }
        void setPort(int port){
            this->port=port;
        }
        int getPort(){
            return port;
        }
        // Te vazhdohen metodat tjera
};
int main(){
    // Te krijohet objketi dhe te thirren funksionet
    return 0;
}