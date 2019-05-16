/** Camera class
 */
class CCamera {
public:
	vec3 pos; // camera position
	vec3 target; // camera direction
	vec3 up; // up of camera
	int width;
	int height;
	int fov; // FOV
};