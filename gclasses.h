extern int QUAN;


class Camera {
public:
	Camera();
	void Rotate(GLint, GLint, GLint);
	void Passive(GLint, GLint);
	GLfloat GetX();
	GLfloat GetY();
	GLfloat GetZ();
	GLfloat GetOldX();
	GLfloat GetOldY();
private:
	GLfloat x, y, z, oldx, oldy;
};

class Atom {
public:
	Atom (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
	void Move();
	GLfloat GetX();
	GLfloat GetY();
	GLfloat GetZ();
	GLfloat GetNX();
	GLfloat GetNY();
	GLfloat GetNZ();
	GLfloat GetR();
	GLfloat GetT();
	float RandomFloat(float, float);
	void HitWall(int);
	GLfloat GetSpeedProj (GLfloat, GLfloat, GLfloat);
	void Hit(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
	GLfloat GetSpeed();
	void ResetPos();
	friend GLfloat GetDist (Atom *, Atom *);
protected:
	GLfloat x, y, z;
	GLfloat newx, newy, newz;
	GLfloat vx, vy, vz;
	GLfloat r;
	GLfloat t;
};

class Pointo {
public:
    Pointo(GLfloat, GLfloat, GLfloat);
    GLfloat GetX();
	GLfloat GetY();
	GLfloat GetZ();
protected:
    GLfloat x,y,z;
};

class Container {
public:
	Container(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
	void SetDim(GLfloat, GLfloat, GLfloat);
	GLfloat GetL();
	GLfloat GetW();
	GLfloat GetH();
	void Draw();
	void Next();
	void Check();
	void Move();
	void SetY(GLint);
	void SetX(GLint);
	GLint GetX();
	GLint GetY();
	GLint NoIntersections (Atom *, Atom*);
	float RandomFloat(float, float);
protected:
	void DrawCube();
	void DrawTable();
	void DrawGraph();
	void typeData(double);
	Atom ** gas;
	Pointo ** coord;
	GLfloat l, w, h,t,r;
	GLint y, x;
};
