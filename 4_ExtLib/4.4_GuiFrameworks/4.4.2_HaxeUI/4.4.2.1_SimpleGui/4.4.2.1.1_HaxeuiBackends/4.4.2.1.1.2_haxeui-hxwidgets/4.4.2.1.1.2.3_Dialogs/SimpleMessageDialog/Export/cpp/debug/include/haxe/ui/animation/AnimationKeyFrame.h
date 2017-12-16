// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_animation_AnimationKeyFrame
#define INCLUDED_haxe_ui_animation_AnimationKeyFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,animation,Animation)
HX_DECLARE_CLASS3(haxe,ui,animation,AnimationComponentRef)
HX_DECLARE_CLASS3(haxe,ui,animation,AnimationKeyFrame)

namespace haxe{
namespace ui{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES AnimationKeyFrame_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AnimationKeyFrame_obj OBJ_;
		AnimationKeyFrame_obj();

	public:
		enum { _hx_ClassId = 0x476a8648 };

		void __construct(int time);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.animation.AnimationKeyFrame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.animation.AnimationKeyFrame"); }
		static hx::ObjectPtr< AnimationKeyFrame_obj > __new(int time);
		static hx::ObjectPtr< AnimationKeyFrame_obj > __alloc(hx::Ctx *_hx_ctx,int time);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationKeyFrame_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AnimationKeyFrame","\x12","\x2d","\x26","\x12"); }

		 ::haxe::ui::animation::Animation animation;
		int time;
		::Array< ::Dynamic> componentRefs;
		 ::haxe::ui::animation::AnimationComponentRef addComponentRef(::String id);
		::Dynamic addComponentRef_dyn();

		 ::Dynamic _completeCallback;
		Dynamic _completeCallback_dyn() { return _completeCallback;}
		int _count;
		void run(Float duration, ::Dynamic complete);
		::Dynamic run_dyn();

		void stop();
		::Dynamic stop_dyn();

		void onComplete();
		::Dynamic onComplete_dyn();

		 ::haxe::ui::animation::AnimationKeyFrame clone();
		::Dynamic clone_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace animation

#endif /* INCLUDED_haxe_ui_animation_AnimationKeyFrame */ 
