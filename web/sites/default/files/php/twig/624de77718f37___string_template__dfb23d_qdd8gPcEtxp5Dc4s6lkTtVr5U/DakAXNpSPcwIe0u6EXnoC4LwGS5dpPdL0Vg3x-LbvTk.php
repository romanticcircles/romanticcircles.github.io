<?php

use Twig\Environment;
use Twig\Error\LoaderError;
use Twig\Error\RuntimeError;
use Twig\Extension\SandboxExtension;
use Twig\Markup;
use Twig\Sandbox\SecurityError;
use Twig\Sandbox\SecurityNotAllowedTagError;
use Twig\Sandbox\SecurityNotAllowedFilterError;
use Twig\Sandbox\SecurityNotAllowedFunctionError;
use Twig\Source;
use Twig\Template;

/* __string_template__dfb23db0011410b918196a05b686b94833d8441b3fb71cd6c872d041e9065050 */
class __TwigTemplate_9877fd15f841c574b671a44ee9876cb8436e414511621a4d96b469ff0f6dabe4 extends \Twig\Template
{
    private $source;
    private $macros = [];

    public function __construct(Environment $env)
    {
        parent::__construct($env);

        $this->source = $this->getSourceContext();

        $this->parent = false;

        $this->blocks = [
        ];
        $this->sandbox = $this->env->getExtension('\Twig\Extension\SandboxExtension');
        $this->checkSecurity();
    }

    protected function doDisplay(array $context, array $blocks = [])
    {
        $macros = $this->macros;
        // line 1
        echo "<a href=\"";
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["view_node"] ?? null), 1, $this->source), "html", null, true);
        echo "\">
<div class=\"label_div\">
    <h4 class=\"card-title centered\">";
        // line 3
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["title_1"] ?? null), 3, $this->source), "html", null, true);
        echo "</h4>
    <p class=\"centered\">
         Reviewed by
         ";
        // line 6
        if ((($context["delta"] ?? null) != 0)) {
            echo ", ";
        }
        // line 7
        echo "         ";
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_contributors"] ?? null), 7, $this->source), "html", null, true);
        echo "  </p>
     <p class=\"centered\">
         Authored by
         ";
        // line 10
        if ((($context["delta_1"] ?? null) != 0)) {
            echo ", ";
        }
        // line 11
        echo "         ";
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_author_ref"] ?? null), 11, $this->source), "html", null, true);
        echo " </p>
<div class=\"home-img\">
    ";
        // line 13
        if (($context["field_image"] ?? null)) {
            // line 14
            echo "        ";
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_image"] ?? null), 14, $this->source), "html", null, true);
            echo "
    ";
        }
        // line 16
        echo "</div>
    
</div>
</a>";
    }

    public function getTemplateName()
    {
        return "__string_template__dfb23db0011410b918196a05b686b94833d8441b3fb71cd6c872d041e9065050";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  80 => 16,  74 => 14,  72 => 13,  66 => 11,  62 => 10,  55 => 7,  51 => 6,  45 => 3,  39 => 1,);
    }

    public function getSourceContext()
    {
        return new Source("", "__string_template__dfb23db0011410b918196a05b686b94833d8441b3fb71cd6c872d041e9065050", "");
    }
    
    public function checkSecurity()
    {
        static $tags = array("if" => 6);
        static $filters = array("escape" => 1);
        static $functions = array();

        try {
            $this->sandbox->checkSecurity(
                ['if'],
                ['escape'],
                []
            );
        } catch (SecurityError $e) {
            $e->setSourceContext($this->source);

            if ($e instanceof SecurityNotAllowedTagError && isset($tags[$e->getTagName()])) {
                $e->setTemplateLine($tags[$e->getTagName()]);
            } elseif ($e instanceof SecurityNotAllowedFilterError && isset($filters[$e->getFilterName()])) {
                $e->setTemplateLine($filters[$e->getFilterName()]);
            } elseif ($e instanceof SecurityNotAllowedFunctionError && isset($functions[$e->getFunctionName()])) {
                $e->setTemplateLine($functions[$e->getFunctionName()]);
            }

            throw $e;
        }

    }
}
