// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_animation_AnimationComponentRef
#define INCLUDED_haxe_ui_animation_AnimationComponentRef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,animation,AnimationComponentRef)
HX_DECLARE_CLASS3(haxe,ui,animation,AnimationKeyFrame)

namespace haxe{
namespace ui{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES AnimationComponentRef_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AnimationComponentRef_obj OBJ_;
		AnimationComponentRef_obj();

	public:
		enum { _hx_ClassId = 0x051ef734 };

		void __construct(::String id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.animation.AnimationComponentRef")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.animation.AnimationComponentRef"); }
		static hx::ObjectPtr< AnimationComponentRef_obj > __new(::String id);
		static hx::ObjectPtr< AnimationComponentRef_obj > __alloc(hx::Ctx *_hx_ctx,::String id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationComponentRef_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AnimationComponentRef","\x9a","\xd5","\xf4","\xce"); }

		 ::haxe::ui::animation::AnimationKeyFrame keyFrame;
		::String id;
		 ::haxe::ds::StringMap properties;
		 ::haxe::ds::StringMap vars;
		void addProperty(::String name,Float value);
		::Dynamic addProperty_dyn();

		void addVar(::String name,::String value);
		::Dynamic addVar_dyn();

		 ::haxe::ui::animation::AnimationComponentRef clone();
		::Dynamic clone_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace animation

#endif /* INCLUDED_haxe_ui_animation_AnimationComponentRef */ 
