// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_animation_Animation
#define INCLUDED_haxe_ui_animation_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,animation,Animation)
HX_DECLARE_CLASS3(haxe,ui,animation,AnimationKeyFrame)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES Animation_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();

	public:
		enum { _hx_ClassId = 0x2481e0e2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.animation.Animation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.animation.Animation"); }
		static hx::ObjectPtr< Animation_obj > __new();
		static hx::ObjectPtr< Animation_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Animation_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Animation","\xe4","\xce","\x07","\xed"); }

		static  ::Dynamic easingFromString(::String s);
		static ::Dynamic easingFromString_dyn();

		::Array< ::Dynamic> keyFrames;
		 ::haxe::ds::StringMap componentMap;
		 ::Dynamic easing;
		::String id;
		 ::haxe::ui::animation::AnimationKeyFrame _currentKeyFrame;
		::String easingString;
		::String set_easingString(::String value);
		::Dynamic set_easingString_dyn();

		 ::haxe::ui::animation::AnimationKeyFrame addKeyFrame(int time);
		::Dynamic addKeyFrame_dyn();

		void setComponent(::String id, ::haxe::ui::core::Component component);
		::Dynamic setComponent_dyn();

		 ::haxe::ui::core::Component getComponent(::String id);
		::Dynamic getComponent_dyn();

		int _currentTime;
		int _currentFrameIndex;
		 ::Dynamic _complete;
		Dynamic _complete_dyn() { return _complete;}
		void start( ::Dynamic complete);
		::Dynamic start_dyn();

		void runFrame(int index);
		::Dynamic runFrame_dyn();

		void nextFrame();
		::Dynamic nextFrame_dyn();

		bool looping;
		bool _loop;
		void complete();
		::Dynamic complete_dyn();

		void loop( ::Dynamic complete);
		::Dynamic loop_dyn();

		bool _stopped;
		void stop();
		::Dynamic stop_dyn();

		void fromXML( ::Xml xml);
		::Dynamic fromXML_dyn();

		 ::haxe::ds::StringMap vars;
		void setVar(::String name,Float value);
		::Dynamic setVar_dyn();

		 ::haxe::ui::animation::Animation clone();
		::Dynamic clone_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace animation

#endif /* INCLUDED_haxe_ui_animation_Animation */ 
