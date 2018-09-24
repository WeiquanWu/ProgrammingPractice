int reverse(int x) {
        	std::string str;
	str = (x > 0) ? std::to_string(x) : std::to_string(-1 * x);  //discard the sign 
	std::reverse(str.begin(), str.end());
    try {
        return (x>0) ? std::stoi(str) : std::stoi("-" + str);
    } catch(std::out_of_range e) {  //let native c++ handle overflow
        return 0;
    }
}

 int main(){

    }