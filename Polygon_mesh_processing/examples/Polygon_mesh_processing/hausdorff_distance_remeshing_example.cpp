#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Surface_mesh.h>
#include <CGAL/boost/graph/graph_traits_Surface_mesh.h>
#include <CGAL/Polygon_mesh_processing/distance.h>
#include <CGAL/Polygon_mesh_processing/remesh.h>

#if CGAL_LINKED_WITH_TBB
#define TAG CGAL::Parallel_tag
#else
#define TAG CGAL::Sequential_tag
#endif

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::Point_3                     Point;
typedef CGAL::Surface_mesh<K::Point_3> Mesh;


int main()
{
  Mesh tm1, tm2;
  CGAL::make_tetrahedron(Point(.0,.0,.0),
                         Point(2,.0,.0),
                         Point(1,1,1),
                         Point(1,.0,2),
                         tm1);
  tm2=tm1;
  CGAL::Polygon_mesh_processing::isotropic_remeshing(tm2.faces(),.05, tm2);

  std::cout << "Approximated Hausdorff distance: "
            << CGAL::Polygon_mesh_processing::approximate_Hausdorff_distance
                  <TAG>(m1, m2, 4000)
            << std::endl;
}
