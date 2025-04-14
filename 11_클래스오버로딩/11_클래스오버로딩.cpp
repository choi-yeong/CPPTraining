

#include <iostream>

class Math {
public :
    int add(int a, int b) { // 1번 메서드 오버로딩
		std::cout << "1번 메서드 오버로딩 " << std::endl;
        return a + b;
    }
    int add(int a, int b, int c) {  // 2번 메서드 오버로딩
		std::cout << "2번 메서드 오버로딩 " << std::endl;
        return a + b + c;
    }
	double add(double a, double b) { // 3번 메서드 오버로딩
		std::cout << "3번 메서드 오버로딩 " << std::endl;
        return a + b;
	}
};

class Shape { //실습1. 함수오버로딩 -면적계산하기
public:
    int area(int side) {
		return side * side;
    }
    int area(int width, int height) {
		return width * height;
    }
	double area(double radius) {
		return 3.14159 * radius * radius;
    }
};

//class Weight {
//public:
//    Weight(int w) : kg(w) {} //kg 부모클래스는 언제 만든거냐;;
//    ~Weight() {}
//    Weight operator+(const Weight& w) {
//        return Weight(this->kg + other.kg);
//		Weight operator-(const Weight & w) {
//			return Weight(this->kg - other.kg);
//        
//    }
//    void show() {
//		cout << "Weight : " << kg << endl;
//    }
//};

class Point { //실습2. 연산자 오버로딩 - 좌표연산
public:
	int x, y;
	Point(int x, int y) : x(x), y(y) {}
	Point operator+(const Point& p) {
		return Point(this->x + p.x, this->y + p.y);
	}
	void show() {
		std::cout << "Point(" << x << ", " << y << ")" << std::endl;
	}
};


int main()
{
    Math m1;
    m1.add(1, 2); // 첫번째 add 메서드 호출
	m1.add(1.2, 2.3); // 세번째 add 메서드 호출
	m1.add(1, 2, 3); // 두번째 add 메서드 호출
	
    //실습1. 함수오버로딩 - 면적계산하기.
    Shape s1;
    std::cout << "리턴값 정사각형의 면적 : " << s1.area(5) << std::endl;
    std::cout << "리턴값 직사각형의 면적 : " << s1.area(5, 10) << std::endl;
    std::cout << "리턴값 원의 면적 : " << s1.area(3.14) << std::endl;

    //Weight w1(50), w2(60);
    //Weight w3 = w1 + w2;
    //w3.show();

    //실습2. 연산자 오버로딩 - 좌표연산
    Point p1(1, 2);
	Point p2(3, 4);
	Point p3 = p1 + p2; // 연산자 오버로딩
	p3.show(); // 결과 : Point(4, 6)


    return 0;
}
