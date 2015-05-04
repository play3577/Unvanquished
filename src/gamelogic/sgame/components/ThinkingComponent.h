#ifndef THINKING_COMPONENT_H_
#define THINKING_COMPONENT_H_

#include "../backend/CBSEBackend.h"
#include "../backend/CBSEComponents.h"

#include <functional>

class ThinkingComponent: public ThinkingComponentBase {

	public:
		typedef enum {
			SCHEDULER_CLOSEST,
			SCHEDULER_BEFORE,
			SCHEDULER_AFTER,
			SCHEDULER_AVERAGE
		} thinkScheduler_t;

		/**
		 * @brief A function that takes the time since last execution and its fraction of the
		 *        desired period as parameters.
		 */
		typedef std::function<void(int)> thinker_t;

		// ///////////////////// //
		// Autogenerated Members //
		// ///////////////////// //

		/**
		 * @brief Default constructor of the ThinkingComponent.
		 * @param entity The entity that owns the component instance.
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		ThinkingComponent(Entity& entity);

		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //

		void Think();

		void RegisterThinker(thinker_t thinker, thinkScheduler_t scheduler, int period);

	private:
		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //

		typedef struct {
			thinker_t thinker;
			thinkScheduler_t scheduler;
			int period;
			int timestamp; /**< Time of last thinker execution. */
			int delay; /**< Summed lateness of previous executions. */
		} thinkRecord_t;

		std::vector<thinkRecord_t> thinkers;

		float averageFrameTime; /**< Smoothed out average frame time for predictions. */
		constexpr static float averageChangeRate = 0.1f;
};

#endif // THINKING_COMPONENT_H_

