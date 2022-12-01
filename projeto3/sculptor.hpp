#ifndef SCULPTOR_HPP
#define SCULPTOR_HPP

/**
 * @brief O struct Voxel é responsável por armazenar as informações de cada voxel.
 * 
 */
struct Voxel {
  float r;
  float g;
  float b;
  float a;
  bool show;
};

/**
 * @brief A classe Sculptor é responsável por armazenar os voxels e realizar as operações de desenho.
 * @details Ela é capaz de armazenar uma matriz tridimensional que é manipulada
 * por diversos métodos capazes de desenhar (ou apagar) figura diferentes.
 * 
 */

class Sculptor {
 private:
  Voxel*** v;
  int nx;
  int ny;
  int nz;            // Dimensions
  float r, g, b, a;  // Current drawing color
 public:
 /**
  * @brief Construct a new Sculptor object
  * 
  * @param _nx é o tamanho da matriz na dimensão x
  * @param _ny é o tamanho da matriz na dimensão y
  * @param _nz é o tamanho da matriz na dimensão z
  * <ul>
  * <li> item 1 </li>
  * <li> item 2 </li>
  * <li> item 3 </li>
  * </ul>
  */
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  void setColor(float r, float g, float b, float alpha);
  void putVoxel(int x, int y, int z);
  void cutVoxel(int x, int y, int z);
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief putEllipsoid desenha um elipsoide a partir da equacao
   *
   * \f$
   * \frac{(x-xcenter)^2}{rx^2}+\frac{(y-ycenter)^2}{ry^2}+\frac{(z-zcenter)^2}{rz^2}
   * \le 1 \f$
   *
   * @param xcenter
   * @param ycenter
   * @param zcenter
   * @param rx
   * @param ry
   * @param rz
   */
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry,
                    int rz);
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry,
                    int rz);
  void writeOFF(const char* filename);
};

#endif
