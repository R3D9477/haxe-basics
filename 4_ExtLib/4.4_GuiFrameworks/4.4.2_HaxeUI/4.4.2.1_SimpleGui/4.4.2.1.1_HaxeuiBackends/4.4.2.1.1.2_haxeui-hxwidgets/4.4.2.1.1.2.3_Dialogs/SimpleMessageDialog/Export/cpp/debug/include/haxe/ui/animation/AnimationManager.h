// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_animation_AnimationManager
#define INCLUDED_haxe_ui_animation_AnimationManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,animation,Animation)
HX_DECLARE_CLASS3(haxe,ui,animation,AnimationManager)

namespace haxe{
namespace ui{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES AnimationManager_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AnimationManager_obj OBJ_;
		AnimationManager_obj();

	public:
		enum { _hx_ClassId = 0x27418f73 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.animation.AnimationManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.animation.AnimationManager"); }
		static hx::ObjectPtr< AnimationManager_obj > __new();
		static hx::ObjectPtr< AnimationManager_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationManager_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AnimationManager","\xe9","\x4f","\xae","\x3b"); }

		static  ::haxe::ui::animation::AnimationManager _instance;
		static  ::haxe::ui::animation::AnimationManager get_instance();
		static ::Dynamic get_instance_dyn();

		 ::haxe::ds::StringMap _animations;
		void registerAnimation(::String id, ::haxe::ui::animation::Animation animation);
		::Dynamic registerAnimation_dyn();

		 ::haxe::ui::animation::Animation run(::String id, ::haxe::ds::StringMap components, ::haxe::ds::StringMap vars, ::Dynamic complete);
		::Dynamic run_dyn();

		 ::haxe::ui::animation::Animation loop(::String id, ::haxe::ds::StringMap components, ::haxe::ds::StringMap vars, ::Dynamic complete);
		::Dynamic loop_dyn();

		 ::haxe::ui::animation::Animation initAnimation(::String id, ::haxe::ds::StringMap components, ::haxe::ds::StringMap vars);
		::Dynamic initAnimation_dyn();

		 ::haxe::ui::animation::Animation get(::String id);
		::Dynamic get_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace animation

#endif /* INCLUDED_haxe_ui_animation_AnimationManager */ 
