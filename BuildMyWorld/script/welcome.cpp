#include <gazebo/gazebo.hh>
namespace gazebo
{
class WorldPluginFirstProject : Public WorldPlugin{
public: WorldPluginFirstProject() : WorldPlugin()
{
printf("Welcome to Abbas's World!\n");
}
public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
{
}
};
GZ_REGISTER_WORLD_PLUGIN(WorldPluginFirstProject)
}
